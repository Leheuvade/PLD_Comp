/**
 * Project Untitled
 */


#pragma once
#include "../enums/Type.h"
#include "../Expressions/Name.h"

class Declaration {
	friend class MapperSymbol;
public:
	Declaration();
	Declaration(Type *type,Name *name,bool isConst);
	virtual ~Declaration();

protected:
	Type *type;
	Name *name;
	bool isConst;
};
