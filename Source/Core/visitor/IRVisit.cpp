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
	VisitOutput * v = p->name->accept(this);
	delete v;
	v = p->params->accept(this);
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
   string toto = p->leftValue->name->name;
    toto = lastCFG->getNameOffset(toto);
    params.push_back(CFG::IR_reg_to_asm(toto));
    VisitOutput* v = p->expr->accept(this);
    string rightValue = static_cast<StringOutput*>(v)->val;
    params.push_back(rightValue);
    delete v;
    //p->leftValue->name->symbole->type mapping à faire
    lastCFG->current_bb->add_IRInstr(IRInstr::wmem, int64_type, params);
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(AffectationUnaire* p)
{
	string val = "AffectationUnaire* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(Char* p)
{
	string val = "Char* p: \n";
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
	string val = "OperationBinaire* p: \n";
	return new StringOutput(val);
}

VisitOutput* IRVisit::visit(OperationUnaire* p)
{
	string val = "OperationUnaire* p: \n";
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
	CFG * lastCFG = cfgs[cfgs.size() - 1];
	lastCFG->add_to_symbol_table(p->name->name, p->type);
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
