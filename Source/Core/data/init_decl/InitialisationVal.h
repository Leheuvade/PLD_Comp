/**
 * Project Untitled
 */


#pragma once
#include "Initialisation.h"

class Val; 

class InitialisationVal {


public:
	InitialisationVal();
	InitialisationVal(Type *type,Name *name,bool isConst,Val * value);
	virtual ~InitialisationVal();

protected:
	Val * value;
	Name * name;
	bool isConst;
	Type * type;
};