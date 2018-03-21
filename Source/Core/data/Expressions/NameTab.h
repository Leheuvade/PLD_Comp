/**
 * Project Untitled
 */

#pragma once

#include "Name.h"
#include <string>

class NameTab: public Name {
public: 
	NameTab(string name);
	NameTab(Expr* indice);
	virtual ~NameTab();
protected: 
	Expr* indice;
};