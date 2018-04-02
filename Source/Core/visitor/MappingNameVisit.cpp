//
// Created by Louise Fonteneau on 02/04/2018.
//

#include <Source/Core/data/init_decl/InitialisationVal.h>
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
    this->programme =p;
    string val = "Programme: \n\n";
    for (int i = 0; i < p->varGlobales.size(); i++)
    {
        val += static_cast<StringOutput*>(p->varGlobales[i]->accept(this))->val;
    }
    for (int i = 0; i < p->definitions.size(); i++)
    {
        val += static_cast<StringOutput*>(p->definitions[i]->accept(this))->val;
    }
    return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Definition* p)
{
    this->blocCourant = p;
    string val = "Definition* p: \n";
    val += "Type:"+std::to_string(static_cast<Type>((int) p->type))+" \n";
    val += static_cast<StringOutput*>(p->params->accept(this))->val;
    val += static_cast<StringOutput*>(p->name->accept(this))->val;
    val += static_cast<StringOutput*>(p->bloc->accept(this))->val;
    p->name->setSymbol(p);
    return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Parametre* p)
{
    string val = "Parametre* p: \n";
    val += "Type:"+std::to_string(static_cast<Type>((int) p->type))+" \n";
    val += static_cast<StringOutput*>(p->name->accept(this))->val;
    p->name->setSymbol(p);
    return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(ParametreDefinition* p)
{
    string val = "ParametreDefinition* p: \n";
    for (int i = 0; i < p->parameters.size(); i++)
    {
        val += static_cast<StringOutput*>(p->parameters[i]->accept(this))->val;
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
    //p->leftValue->name->setSymbol(mapperSymbol.findSymbol(p->leftValue->name->name, programme, blocCourant));
    val += static_cast<StringOutput*>(p->leftValue->accept(this))->val;
    val += "Operateur:"+std::to_string(static_cast<OperateurAffectationBinaire>((int) p->op))+" \n";
    val += static_cast<StringOutput*>(p->expr->accept(this))->val;
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
    mapperSymbol.appelFnctTrue();
    val += static_cast<StringOutput*>(p->name->accept(this))->val;
    val += static_cast<StringOutput*>(p->parameters->accept(this))->val;
    //Appeler méthode pour savoir à quelle definition est associée cet appel
    return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Name* p)
{
    string val = "Name* p:"+p->name+"\n";
    p->setSymbol(mapperSymbol.findSymbol(p->name, programme, blocCourant));
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
    val += static_cast<StringOutput*>(p->expr1->accept(this))->val;
    val += "Operateur:"+std::to_string(static_cast<OperateurBinaire>((int) p->op))+" \n";
    val += static_cast<StringOutput*>(p->expr2->accept(this))->val;
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
        val += static_cast<StringOutput*>(p->parameters[i]->accept(this))->val;
    }
    return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Val* p)
{
    string val = "Val* p: \n";
    val += "Val:"+std::to_string(p->val)+" \n";
    return new StringOutput(val);
}

VisitOutput* MappingNameVisit::visit(Declaration* p)
{
    string val = "Declaration* p: \n";
    val += "Type:"+std::to_string(static_cast<Type>((int) p->type))+" \n";
    val += static_cast<StringOutput*>(p->name->accept(this))->val;
    p->name->setSymbol(p);
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
    val +=std::to_string((int)p->type);
    val += static_cast<StringOutput*>(p->name->accept(this))->val;

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
    val += static_cast<StringOutput*>(p->value->accept(this))->val;
    p->name->setSymbol(p);
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
    val += static_cast<StringOutput*>(p->expr->accept(this))->val;
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
    for (int i = 0; i < p->initDecl.size(); i++)
    {
        val += static_cast<StringOutput*>(p->initDecl[i]->accept(this))->val;
    }
    for (int i = 0; i < p->instructions.size(); i++)
    {
        val += static_cast<StringOutput*>(p->instructions[i]->accept(this))->val;
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
    val += static_cast<StringOutput*>(p->name->accept(this))->val;
    return new StringOutput(val);
}
