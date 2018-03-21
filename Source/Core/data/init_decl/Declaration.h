/**
 * Project Untitled
 */


#pragma once
#include "../enums/Type.h"
#include "../Expressions/Name.h"

class Declaration {

public:
	Declaration();
	Declaration(Type *type,Name *name,bool isConst);
	~Declaration();

protected:
	Type *type;
	Name *name;

	bool isConst;
};



