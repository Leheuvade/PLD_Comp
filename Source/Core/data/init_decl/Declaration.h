/**
 * Project Untitled
 */


#ifndef _DECLARATION_H
#define _DECLARATION_H
#include "../enums/Type.h"
#include "../Expressions/Name.h"

class Declaration {
public: 
	Type* type;
	Name *name;
	bool isConst;
};

#endif //_DECLARATION_H