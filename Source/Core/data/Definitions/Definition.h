/**
 * Project Untitled
 */


#pragma once
#include "ParametreDefinition.h"
#include "../enums/Type.h"
#include "../init_decl/Symbole.h"

class Name;
class Bloc;

class Definition : public Symbole {
	friend class MapperSymbol;
	friend class DebugVisit;
public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	Definition(Type type, Name* name, ParametreDefinition* params, Bloc* bloc);
	virtual ~Definition();

protected:
	Type type;
	Name* name;
	ParametreDefinition* params;
	Bloc* bloc;

};

