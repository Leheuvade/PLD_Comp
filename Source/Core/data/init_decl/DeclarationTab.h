/**
 * Project Untitled
 */

#pragma once
#include "Declaration.h"
#include "../Expressions/Val.h"


class DeclarationTab: public Declaration {



public:
	DeclarationTab();
	DeclarationTab(Type *type, Name *name, bool isConst,Val *size);
	virtual ~DeclarationTab();

protected:
	Val *size;

};

