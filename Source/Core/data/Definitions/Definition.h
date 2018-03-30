/**
 * Project Untitled
 */


#pragma once
#include "ParametreDefinition.h"
#include "../enums/Type.h"

class Name;
class Bloc;

class Definition {
	friend class MapperSymbol;
friend class DebugVisit; 
 public:
Definition(Type type, Name* name, ParametreDefinition* params, Bloc* bloc);
virtual ~Definition();

protected:
	Type type;
	Name* name;
	ParametreDefinition* params;
	Bloc* bloc;

};

