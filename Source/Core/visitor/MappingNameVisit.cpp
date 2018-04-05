//
// Created by Louise Fonteneau on 02/04/2018.
//

#include "MappingNameVisit.h"
#include "StringOutput.h"

MappingNameVisit::MappingNameVisit() {}

MappingNameVisit::~MappingNameVisit() {

}

VisitOutput* MappingNameVisit::visit(Visitable* p)
{
	string val = "Visitable* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Programme *p)
{
	this->programme = p;
	string val = "Programme: \n\n";
	for (int i = 0; i < p->definitions.size(); i++)
	{
		VisitOutput *v = p->definitions[i]->accept(this);
		val += static_cast<StringOutput*>(v)->val;
		delete v;

	}
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Definition* p)
{
	this->blocCourant = p;
	string val = "Definition* p: \n";
	VisitOutput * v = p->bloc->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Parametre* p)
{
	string val = "Parametre* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(ParametreDefinition* p)
{
	string val = "ParametreDefinition* p: \n";
	for (int i = 0; i < p->parameters.size(); i++)
	{
		VisitOutput *v = p->parameters[i]->accept(this);
		val += static_cast<StringOutput*>(v)->val;
		delete v;

	}
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Affectation* p)
{
	string val = "Affectation* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(AffectationBinaire* p)
{
	string val = "AffectationBinaire* p: \n";
	VisitOutput *v = p->leftValue->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	val += "Operateur:" + std::to_string(static_cast<OperateurAffectationBinaire>((int)p->op)) + " \n";
	v = p->expr->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(AffectationUnaire* p)
{
	string val = "AffectationUnaire* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Char* p)
{
	string val = "Char* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Expr* p)
{
	string val = "Expr* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(ExprAppel* p)
{
	string val = "ExprAppel* p: \n";
    p->name->setSymbol(mapperSymbol.findDefinition(p->name->name, programme));
    VisitOutput * v = p->parameters->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	//Appeler méthode pour savoir à quelle definition est associée cet appel
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Name* p)
{
	string val = "Name* p:" + p->name + "\n";
	p->setSymbol(mapperSymbol.findDeclaration(p->name, programme, blocCourant));
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(NameTab* p)
{
	string val = "NameTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Operation* p)
{
	string val = "Operation* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(OperationBinaire* p)
{
	string val = "OperationBinaire* p: \n";
	VisitOutput *v = p->expr1->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	val += "Operateur:" + std::to_string(static_cast<OperateurBinaire>((int)p->op)) + " \n";
	v = p->expr2->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(OperationUnaire* p)
{
	string val = "OperationUnaire* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(ParametreAppel* p)
{
	string val = "ParametreAppel* p: \n";
	for (int i = 0; i < p->parameters.size(); i++)
	{
		VisitOutput *v = p->parameters[i]->accept(this);
		val += static_cast<StringOutput*>(v)->val;
		delete v;

	}
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Val* p)
{
	string val = "Val* p: \n";
	val += "Val:" + std::to_string(p->val) + " \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Declaration* p)
{
	string val = "Declaration* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(DeclarationTab* p)
{
	string val = "DeclarationTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(InitDecl* p)
{
	string val = "InitDecl* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Initialisation* p)
{
	string val = "Initialisation* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(InitialisationTab* p)
{
	string val = "InitialisationTab* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(InitialisationVal* p)
{
	string val = "InitialisationVal* p: \n";

	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Symbole* p)
{
	string val = "Symbole* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(InstructionBreak* p)
{
	string val = "InstructionBreak* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(InstructionControle* p)
{
	string val = "InstructionControle* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(InstructionExpr* p)
{
	string val = "InstructionExpr* p: \n";
	VisitOutput *v = p->expr->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(InstructionReturn* p)
{
	string val = "InstructionReturn* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(InstructionStruct* p)
{
	string val = "InstructionStruct* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(ElseBloc* p)
{
	string val = "ElseBloc* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(StructureControle* p)
{
	string val = "StructureControle* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(StructureIf* p)
{
	string val = "StructureIf* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(StructureWhile* p)
{
	string val = "StructureWhile* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Bloc* p)
{
	string val = "Bloc* p: \n";
	for (int i = 0; i < p->instructions.size(); i++)
	{
		VisitOutput *v = p->instructions[i]->accept(this);
		val += static_cast<StringOutput*>(v)->val;
		delete v;

	}
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(BlocStruct* p)
{
	string val = "BlocStruct* p: \n";
	return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(LeftValue* p)
{
	string val = "LeftValue* p: \n";
	VisitOutput *v = p->name->accept(this);
	val += static_cast<StringOutput*>(v)->val;
	delete v;

	return new StringOutput(val);
}
