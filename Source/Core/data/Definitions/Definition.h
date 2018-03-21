/**
 * Project Untitled
 */


#pragma once
#include "Type.h"
#include "Name.h"
#include "ParametreDefinition.h"
#include "Bloc.h"
#include "../enums/Type.h"

class Name;
class Bloc;

class Definition {
public:
Definition::Definition(Type* type, Name* name, ParametreDefinition* params, Bloc* bloc);
~Definition();

protected:
	Type* type;
	Name* name;
	ParametreDefinition* params;
	Bloc* bloc;

};

