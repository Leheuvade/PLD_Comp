/**
 * Project Untitled
 */


#include "Definition.h"
#include "ParametreDefinition.h"
#include "../enums/Type.h"
#include "../Bloc.h"
#include "../Expressions/Name.h"



Definition::Definition(Type type, Name* name, ParametreDefinition* params, Bloc* bloc)

{
    this->type=type;
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
