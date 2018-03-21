/**
 * Project Untitled
 */


#pragma once
#include "../enums/Type.h"
#include "../Expressions/Name.h"

class Initialisation {


public:
	Initialisation();
	Initialisation(Type *type,Name *name,bool isConst);
	~Initialisation();

protected:
	Type *type;
	Name *name;

	bool isConst;
};

