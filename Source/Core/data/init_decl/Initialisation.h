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
friend class IRVisit;
friend class MappingNameVisit;
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	Initialisation();
	Initialisation(Type type, Name *name, bool isConst);
	virtual ~Initialisation();

protected:
	bool isConst;
};
