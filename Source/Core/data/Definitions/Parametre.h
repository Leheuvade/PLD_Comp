/**
 * Project Untitled
 */


#ifndef _PARAMETRE_H
#define _PARAMETRE_H
#include "../enums/Type.h"
#include "../Expressions/Name.h"

class Parametre {
public: 
	Type *type;
	Name *name;
	bool hasBrackets;
};

#endif //_PARAMETRE_H