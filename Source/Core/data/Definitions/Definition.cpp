/**
 * Project Untitled
 */


#include "Definition.h"
#include "../Bloc.h"
#include "../../visitor/VisitAST.h"

VisitOutput* Definition::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}

Definition::Definition(Type type, Name* name, ParametreDefinition* params, Bloc* bloc) : Symbole(type)
{
    this->name=name;
    this->params=params;
    this->bloc=bloc;
}

Definition::~Definition()
{
	delete name;
	delete params;
	delete bloc;
}
