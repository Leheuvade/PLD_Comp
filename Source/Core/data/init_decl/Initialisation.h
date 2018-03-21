/**
 * Project Untitled
 */


#ifndef _INITIALISATION_H
#define _INITIALISATION_H
#include "../enums/Type.h"
#include "../Expressions/Name.h"

class Initialisation {
public: 
	Type *type;
	Name *name;
	bool isConst;
};

#endif //_INITIALISATION_H