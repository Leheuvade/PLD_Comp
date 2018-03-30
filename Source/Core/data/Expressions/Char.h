/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class Char: public Expr {
friend class DebugVisit; 
 public: 
	Char();
	Char(char val);
	virtual ~Char();

protected: 
	char val;
};