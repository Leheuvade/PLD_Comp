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
	//on cherche le CFG de main et on return son assembleur
	if (mainCFG)
	{
		ofstream outputFile(fileName);
		mainCFG->gen_asm_prologue(outputFile);
		mainCFG->gen_asm(outputFile);
		mainCFG->gen_asm_epilogue(outputFile);
		outputFile.close();
		val += "compile successfull";
	}
	else
	{
		val += "no main fct";
	}
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Definition* p)
{
	string val = "";
	CFG* cfg = new CFG(p);
	cfgs.push_back(cfg);
	if (p->name->name == "main")
	{
		mainCFG = cfg;//bloc principal qui sera lu � l'execution
	}
	/*VisitOutput * v = p->name->accept(this);
	delete v;*/
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
	//TODO get type from mapper
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
    cout<<rightValue<<endl;
    params.push_back(rightValue);
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
    switch(p->op){
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
	string val = "$"+to_string(p->val);
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Expr* p)
{
	string val = "Expr* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(ExprAppel* p)
{
	string val = "ExprAppel* p: \n";
	return new StringOutput(val);
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
	params.push_back(addr);
	params.push_back(static_cast<StringOutput*>(v1)->val);
	params.push_back(static_cast<StringOutput*>(v2)->val);

	delete v1, v2;

	switch (p->op) {
	case DIFF:
		break;
	case PLUS:
		lastCFG->current_bb->add_IRInstr(IRInstr::add, int64_type, params);
		break;
	case MINUS:
		lastCFG->current_bb->add_IRInstr(IRInstr::sub, int64_type, params);
		break;
	case EEGAL:
		break;
	case MULT:
		lastCFG->current_bb->add_IRInstr(IRInstr::mul, int64_type, params);
		break;
	case DIV:
		break;
	default:
		break;
	}
	// on retourne l'adresse de la variable temporaire qui stock le r�sultat de l'op�ration
	return new StringOutput(addr); 
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
	string val = "ParametreAppel* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Val* p)
{
	string val = "$"+to_string(p->val);
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Declaration* p)
{
	string val = "";
    if(cfgs.size()==0){
        mainCFG->add_to_symbol_table(p->name->name, p->type);
    } else{
        CFG* lastCFG  = cfgs[cfgs.size() - 1];
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
	string newName=lastCFG->add_to_symbol_table(p->name->name, p->type);
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
	string val = "InstructionReturn* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(InstructionStruct* p)
{
	string val = "InstructionStruct* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(ElseBloc* p)
{
	string val = "ElseBloc* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(StructureControle* p)
{
	string val = "StructureControle* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(StructureIf* p)
{
	string val = "StructureIf* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(StructureWhile* p)
{
	string val = "StructureWhile* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Bloc* p)
{
	string val = "";
	CFG* lastCFG = cfgs[cfgs.size() - 1];
	lastCFG->add_bb(new BasicBlock(lastCFG, "debutFct"));
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
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(BlocStruct* p)
{
	string val = "BlocStruct* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(LeftValue* p)
{
	string val = "LeftValue* p: \n";

	return new StringOutput(val);
}
