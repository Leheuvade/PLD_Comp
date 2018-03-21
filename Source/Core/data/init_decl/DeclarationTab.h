/**
 * Project Untitled
 */


#ifndef _DECLARATIONTAB_H
#define _DECLARATIONTAB_H

#include "Declaration.h"
#include "../Expressions/Val.h"


class DeclarationTab: public Declaration {
public: 
	Val *size;
};

#endif //_DECLARATIONTAB_H