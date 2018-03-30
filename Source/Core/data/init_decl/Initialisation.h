/**
 * Project Untitled
 */


#pragma once
#include "../enums/Type.h"
#include "../Expressions/Name.h"
#include "InitDecl.h"

class Initialisation : public InitDecl {

	friend class MapperSymbol;
friend class DebugVisit; 
 public:
	Initialisation();
	Initialisation(Type type,Name *name,bool isConst);
	virtual ~Initialisation();

protected:
	Type type;
	Name *name;
	bool isConst;
};
