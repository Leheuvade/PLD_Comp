/**
* Project Untitled
*/

#include "IRVisit.h"
#include "StringOutput.h"
#include "../data/init_decl/InitialisationVal.h"

IRVisit::IRVisit()
{

}

IRVisit::~IRVisit()
{
}

VisitOutput* IRVisit::visit(Visitable* p)
{
	string val = "Visitable* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Programme *p)
{

	string val = "Programme: \n\n";
	//on parcourt l'ast
	for (int i = 0; i < p->varGlobales.size(); i++)
	{
		VisitOutput *v = (p->varGlobales[i]->accept(this));
		delete v;
	}
	for (int i = 0; i < p->definitions.size(); i++)
	{
		VisitOutput *v = (p->definitions[i]->accept(this));
		delete v;
	}
	ofstream outputFile(outName);

	if (mainCFG)
	{
		mainCFG->gen_asm(outputFile);
		val += "compile successfull";
	}
	else
	{
		val += "no main fct";
	}
	for (int i = 0; i < cfgs.size(); i++)
	{
		if (cfgs[i] != mainCFG) {
			cfgs[i]->gen_asm(outputFile);
		}

	}
	outputFile.close();

	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Definition* p)
{
	string val = "";
	CFG* cfg = new CFG(p,inName);
	cfgs.push_back(cfg);
	if (p->name->name == "main")
	{
		mainCFG = cfg;//bloc principal qui sera lu � l'execution
	}
	
	VisitOutput * v = p->params->accept(this);
	delete v;
	v = p->bloc->accept(this);
	delete v;
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Parametre* p)
{
	string val = "";
	CFG* lastCFG = cfgs[cfgs.size() - 1];
	lastCFG->add_to_symbol_table(p->name->name, p->type);
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(ParametreDefinition* p)
{
	string val = "";
	for (int i = 0; i < p->parameters.size(); i++)
	{
		VisitOutput *v = p->parameters[i]->accept(this);
		delete v;
	}
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Affectation* p)
{


	string val = "Affectation* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(AffectationBinaire* p)
{
	string val = "";
	CFG * lastCFG = cfgs[cfgs.size() - 1];
	vector<string> params;
	params.push_back(CFG::IR_reg_to_asm(lastCFG->getNameOffset(p->leftValue->name->name)));
	VisitOutput* v = p->expr->accept(this);
	string rightValue = static_cast<StringOutput*>(v)->val;
	cout << (rightValue) << endl;
	params.push_back((rightValue));
	delete v;
	lastCFG->current_bb->add_IRInstr(IRInstr::wmem, p->leftValue->name->symbole->type, params);
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(AffectationUnaire* p)
{
	string val = "";
	CFG * lastCFG = cfgs[cfgs.size() - 1];
	vector<string> params;
	params.push_back(CFG::IR_reg_to_asm(lastCFG->getNameOffset(p->leftValue->name->name)));
	params.push_back("$1");
	switch (p->op) {
	case PPLUS: lastCFG->current_bb->add_IRInstr(IRInstr::add, int64_type, params);
		break;
	case MMOINS:
		break;
	case PPLUS_AFTER: lastCFG->current_bb->add_IRInstr(IRInstr::add, int64_type, params);
		break;
	case MMOINS_AFTER:
		break;
	default:
		break;
	}
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Char* p)
{
	string val = "$" + to_string(p->val);
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Expr* p)
{
	string val = "Expr* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(ExprAppel* p)
{
	string val = "";
	VisitOutput* v = p->parameters->accept(this);
	CFG* lastCFG = cfgs[cfgs.size() - 1];
	BasicBlock* bb = lastCFG->current_bb;
	vector<string> params;
	params.push_back(p->name->name);
	//TODO  get type
	bb->add_IRInstr(IRInstr::call, int64_type, params);
	delete v;
	string nameTmp=lastCFG->create_new_tempvar(int64_type);
	vector<string>params2;
	params2.push_back(CFG::IR_reg_to_asm(nameTmp));
	params2.push_back("eax");
	bb->add_IRInstr(IRInstr::wmem, int64_type, params2);
	return new StringOutput(CFG::IR_reg_to_asm(nameTmp));
}

VisitOutput* IRVisit::visit(Name* p)
{
	string val = "";
	CFG * lastCFG = cfgs[cfgs.size() - 1];
	val += CFG::IR_reg_to_asm(lastCFG->getNameOffset(p->name));
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(NameTab* p)
{
	string val = "NameTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Operation* p)
{
	string val = "Operation* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(OperationBinaire* p)
{
	CFG * lastCFG = cfgs[cfgs.size() - 1];
	VisitOutput * v1 = p->expr1->accept(this);
	VisitOutput * v2 = p->expr2->accept(this);

	vector<string> params;
	string addr = lastCFG->create_new_tempvar(int64_type); //TODO: detect Type
	params.push_back(CFG::IR_reg_to_asm(addr));
	params.push_back(static_cast<StringOutput*>(v1)->val);
	params.push_back(static_cast<StringOutput*>(v2)->val);

	delete v1, v2;
	string tmp;
	switch (p->op) {
	case DIFF:
		break;
	case PLUS:
		lastCFG->current_bb->add_IRInstr(IRInstr::add, int64_type, params);
		break;
	case MINUS:
		lastCFG->current_bb->add_IRInstr(IRInstr::sub, int64_type, params);
		break;
	case MULT:
		lastCFG->current_bb->add_IRInstr(IRInstr::mul, int64_type, params);
		break;
	case DIV:
		break;
	case SUP:
		//on inverse les params
		tmp = params[1];
		params[1] = params[2];
		params[2] = tmp;
		lastCFG->current_bb->add_IRInstr(IRInstr::cmp_lt, int64_type, params);
		break;
	case INF:
		lastCFG->current_bb->add_IRInstr(IRInstr::cmp_lt, int64_type, params);
		break;
	case EEGAL:
		lastCFG->current_bb->add_IRInstr(IRInstr::cmp_eq, int64_type, params);
		break;
	case BITWISE_AND: break;
	case BITWISE_OR: break;
	case BITWISE_XOR: break;
	case SUP_EGAL: break;
	case INF_EGAL: break;
	case AND: break;
	case OR: break;
	case XOR: break;
	case MODULO: break;
	default:
		break;
	}
	// on retourne l'adresse de la variable temporaire qui stock le r�sultat de l'op�ration
	return new StringOutput(CFG::IR_reg_to_asm(addr));
}

VisitOutput* IRVisit::visit(OperationUnaire* p)
{
	string val = "";
	CFG * lastCFG = cfgs[cfgs.size() - 1];
	VisitOutput * v = p->expr->accept(this);

	// On n'a pas ces op�rations unaires dans la liste des instructions IR disponibles mdr
	switch (p->op) {
	case NO:
		break;
	case NO_BIT:
		break;
	default:
		break;
	}
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(ParametreAppel* p)
{
	string val = "";
	vector<string> listeParams;
	int nbParams = p->parameters.size();
	VisitOutput* v;
	for (int i = 0; i < nbParams; i++)
	{
		v = p->parameters[i]->accept(this);
		listeParams.push_back(static_cast<StringOutput*>(v)->val);
		delete v;
	}
	for (int i = nbParams - 1; i >= 0; i--)
	{
		CFG * lastCFG = cfgs[cfgs.size() - 1];
		vector<string> params;
		string reg = "";
		if (i >= 6)
		{
			//TODO use stack for other params
		}
		else
		{
			switch (i)
			{
			case 0:
				reg += "rdi";
				break;
			case 1:
				reg += "rsi";
				break;
			case 2:
				reg += "rdx";
				break;
			case 3:
				reg += "rcx";
				break;
			case 4:
				reg += "r8";
				break;
			case 5:
				reg += "r9";
				break;
			}
		}
		params.push_back(reg);
		params.push_back(listeParams[i]);

		//TODO get type
		lastCFG->current_bb->add_IRInstr(IRInstr::movq, int64_type, params);
	}
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Val* p)
{
	string val = "$" + to_string(p->val);
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Declaration* p)
{
	string val = "";
	if (cfgs.size() == 0) {
		mainCFG->add_to_symbol_table(p->name->name, p->type);
	}
	else {
		CFG* lastCFG = cfgs[cfgs.size() - 1];
		lastCFG->add_to_symbol_table(p->name->name, p->type);
	}

	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(DeclarationTab* p)
{
	string val = "DeclarationTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InitDecl* p)
{
	string val = "InitDecl* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Initialisation* p)
{
	string val = "Initialisation";


	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InitialisationTab* p)
{
	string val = "InitialisationTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InitialisationVal* p)
{
	string val = "";
	CFG * lastCFG = cfgs[cfgs.size() - 1];
	string newName = lastCFG->add_to_symbol_table(p->name->name, p->type);
	vector<string> params;
	params.push_back(CFG::IR_reg_to_asm(newName));
	VisitOutput* v = p->value->accept(this);
	params.push_back(static_cast<StringOutput*>(v)->val);
	delete v;
	lastCFG->current_bb->add_IRInstr(IRInstr::wmem, p->type, params);
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Symbole* p)
{
	string val = "Symbole* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InstructionBreak* p)
{
	string val = "InstructionBreak* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InstructionControle* p)
{
	string val = "InstructionControle* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InstructionExpr* p)
{
	string val = "InstructionExpr* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InstructionReturn* p)
{
	string val = "";
	CFG* lastCFG = cfgs[cfgs.size() - 1];
	VisitOutput *v = p->expr->accept(this);
	vector<string> params;
	params.push_back("eax");
	params.push_back((static_cast<StringOutput*>(v)->val));
	delete v;
	//TODO get type
	lastCFG->current_bb->add_IRInstr(IRInstr::movq, int64_type, params);
	vector<string> params2;
	lastCFG->current_bb->add_IRInstr(IRInstr::leave, int64_type, params2);
	lastCFG->current_bb->add_IRInstr(IRInstr::ret, int64_type, params2);

	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InstructionStruct* p)
{
	string val = "";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(ElseBloc* p)
{
	string val = "";
	VisitOutput*v = p->bloc->accept(this);
	delete v;
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(StructureControle* p)
{
	string val = "StructureControle* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(StructureIf* p)
{
	string val = "";
	CFG* lastCFG = cfgs[cfgs.size() - 1];
	BasicBlock*bCurrent = lastCFG->current_bb;
	VisitOutput * v = p->condition->accept(this);
	vector<string>params;
	params.push_back("$0");
	params.push_back((static_cast<StringOutput*>(v)->val));
	bCurrent->add_IRInstr(IRInstr::cmpq, int64_type, params);

	BasicBlock* bIf = new BasicBlock(lastCFG, "BIF");
	BasicBlock* bElse = new BasicBlock(lastCFG, "BELSE");
	BasicBlock* bFin = new BasicBlock(lastCFG, "BFIN");
	lastCFG->current_bb = bIf;
	if(bCurrent->exit_true)
	{
		bFin->exit_true = bCurrent->exit_true;
	}
	bCurrent->exit_true = bIf;
	bCurrent->exit_false = bElse;
	bIf->exit_true = bFin;
	bElse->exit_true = bFin;


	
	
	vector<string>params2;
	params2.push_back(bElse->label);
	bCurrent->add_IRInstr(IRInstr::je, int64_type, params2);
	delete v;

	v = p->bloc->accept(this);
	lastCFG->current_bb = bElse;
	if (p->elseBloc) {
		v = p->elseBloc->accept(this);
	}
	lastCFG->current_bb = bFin;
	
	delete v;
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(StructureWhile* p)
{
	string val = "";
	CFG* lastCFG = cfgs[cfgs.size() - 1];
	BasicBlock* bCurrent = lastCFG->current_bb;
	BasicBlock* bBoucle = new BasicBlock(lastCFG, "BWHILE");
	BasicBlock* bFin = new BasicBlock(lastCFG, "BFINWHILE");
	lastCFG->current_bb = bBoucle;
	bFin->exit_true = bCurrent->exit_true;
	bCurrent->exit_true = bBoucle;

	VisitOutput * v = p->condition->accept(this);
	vector<string>params;
	params.push_back("$0");
	params.push_back((static_cast<StringOutput*>(v)->val));
	lastCFG->current_bb->add_IRInstr(IRInstr::cmpq, int64_type, params);
	vector<string>params2;

	

	params2.push_back(bFin->label);

	bBoucle->exit_true = bBoucle;//permet de reboucler sur lui meme
	bBoucle->exit_false = bFin;//permet d'afficher dans l'asm la fin

	lastCFG->current_bb->add_IRInstr(IRInstr::je, int64_type, params2);
	delete v;
	v = p->bloc->accept(this);

	lastCFG->current_bb = bFin;

	

	delete v;
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Bloc* p)
{
	CFG* lastCFG = cfgs[cfgs.size() - 1];
	BasicBlock* bDebut=new BasicBlock(lastCFG, "BDEBUT");
	BasicBlock* bFin = new BasicBlock(lastCFG, "BFINCFG");
	lastCFG->current_bb = bDebut;
	bDebut->exit_true = bFin;
	for (int i = 0; i < p->initDecl.size(); i++)
	{
		VisitOutput *v = p->initDecl[i]->accept(this);
		delete v;
	}
	for (int i = 0; i < p->instructions.size(); i++)
	{
		VisitOutput * v = p->instructions[i]->accept(this);
		delete v;
	}
	return new StringOutput(bDebut->label);
}

VisitOutput* IRVisit::visit(BlocStruct* p)
{

	for (int i = 0; i < p->instructions.size(); i++)
	{
		VisitOutput * v = p->instructions[i]->accept(this);
		delete v;
	}
	return new StringOutput("");
}

VisitOutput* IRVisit::visit(LeftValue* p)
{
	string val = "LeftValue* p: \n";
	return new StringOutput(val);
}
