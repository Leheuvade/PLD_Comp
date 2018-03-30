/**
 * Project Untitled
 */


#pragma once
#include "../enums/Type.h"
#include "../Expressions/Name.h"
#include "InitDecl.h"

class Declaration : public InitDecl {
	friend class MapperSymbol;
friend class DebugVisit; 
 public:
	Declaration();
	Declaration(Type type, Name *name, bool isConst);
	virtual ~Declaration();

protected:
	Type type;
	Name *name;
	bool isConst;
};
