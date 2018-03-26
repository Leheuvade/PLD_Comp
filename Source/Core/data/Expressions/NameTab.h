/**
 * Project Untitled
 */

#pragma once

#include "Name.h"
#include <string>

class NameTab: public Name {
public: 
	NameTab();
	NameTab(string name,Expr* indice);
	virtual ~NameTab();
protected: 
	Expr* indice;

};