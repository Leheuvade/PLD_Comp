/**
 * Project Untitled
 */

#pragma once
#include "Declaration.h"
#include "../Expressions/Val.h"


class DeclarationTab: public Declaration {



public:
	DeclarationTab();
	DeclarationTab(Val *size);
	~DeclarationTab();

protected:
	Val *size;

};

