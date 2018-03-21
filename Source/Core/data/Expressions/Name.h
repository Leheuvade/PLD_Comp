/**
 * Project Untitled
 */

#pragma once

#include "Expr.h"
#include <string>


class Name: public Expr {
public:
	Name();
	Name(string name);
	virtual ~Name();
protected: 
	string name;
};
