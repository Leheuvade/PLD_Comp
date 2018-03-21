/**
 * Project Untitled
 */


#ifndef _DECLARATIONTAB_H
#define _DECLARATIONTAB_H

#include "Declaration.h"


class DeclarationTab: public Declaration {


public:
	DeclarationTab();
	DeclarationTab(Val size);
	~DeclarationTab();

protected:
	Val size;
};

#endif //_DECLARATIONTAB_H
