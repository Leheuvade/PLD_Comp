/**
 * Project Untitled
 */

#include "DebugVisit.h"
#include "StringOutput.h"
#include "../data/init_decl/InitialisationVal.h"

DebugVisit::DebugVisit()
{

}

DebugVisit::~DebugVisit()
{
}

VisitOutput* DebugVisit::visit(Visitable* p)
{
	string val = "Visitable* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Programme *p)
{

	string val = "Programme: \n\n";
	for (int i = 0; i < p->varGlobales.size(); i++)
	{
		VisitOutput *v = p->varGlobales[i]->accept(this);
		val += static_cast<StringOutput*>(v)->val;
		delete v;

	}
	for (int i = 0; i < p->definitions.size(); i++)
	{
		VisitOutput *v = p->definitions[i]->accept(this);
		val += static_cast<StringOutput*>(v)->val;
		delete v;

	}
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Definition* p)
{
	string val = "Definition* p: \n";
	val += std::to_string((int)p->type) + "\n";
	VisitOutput *v = p->name->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	v = p->params->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	v = p->bloc->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;


	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Parametre* p)
{
	string val = "Parametre* p: \n";
	val += std::to_string((int)p->type) + "\n";
	VisitOutput *v = p->name->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	val += "hasBracket: " + (p->hasBrackets) ? "true\n" : "false\n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(ParametreDefinition* p)
{
	string val = "ParametreDefinition* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Affectation* p)
{
	string val = "Affectation* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(AffectationBinaire* p)
{
	string val = "AffectationBinaire* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(AffectationUnaire* p)
{
	string val = "AffectationUnaire* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Char* p)
{
	string val = "Char* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Expr* p)
{
	string val = "Expr* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(ExprAppel* p)
{
	string val = "ExprAppel* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Name* p)
{
	string val = "Name* p:" + p->name;
	//to_string((int)p->symbole)+" \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(NameTab* p)
{
	string val = "NameTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Operation* p)
{
	string val = "Operation* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(OperationBinaire* p)
{
	string val = "OperationBinaire* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(OperationUnaire* p)
{
	string val = "OperationUnaire* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(ParametreAppel* p)
{
	string val = "ParametreAppel* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Val* p)
{
	string val = "Val* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Declaration* p)
{
	string val = "Declaration* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(DeclarationTab* p)
{
	string val = "DeclarationTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(InitDecl* p)
{
	string val = "InitDecl* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Initialisation* p)
{
	string val = "Initialisation* p: \n";
	val += std::to_string((int)p->type);
	VisitOutput *v = p->name->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;


	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(InitialisationTab* p)
{
	string val = "InitialisationTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(InitialisationVal* p)
{
	string val = "InitialisationVal* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Symbole* p)
{
	string val = "Symbole* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(InstructionBreak* p)
{
	string val = "InstructionBreak* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(InstructionControle* p)
{
	string val = "InstructionControle* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(InstructionExpr* p)
{
	string val = "InstructionExpr* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(InstructionReturn* p)
{
	string val = "InstructionReturn* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(InstructionStruct* p)
{
	string val = "InstructionStruct* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(ElseBloc* p)
{
	string val = "ElseBloc* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(StructureControle* p)
{
	string val = "StructureControle* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(StructureIf* p)
{
	string val = "StructureIf* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(StructureWhile* p)
{
	string val = "StructureWhile* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(Bloc* p)
{
	string val = "Bloc* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(BlocStruct* p)
{
	string val = "BlocStruct* p: \n";
	return new StringOutput(val);
}

VisitOutput* DebugVisit::visit(LeftValue* p)
{
	string val = "LeftValue* p: \n";
	return new StringOutput(val);
}
