/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class Char: public Expr {
public: 
	Char();
	Char(char val);
	virtual ~Char();

protected: 
	char val;
};