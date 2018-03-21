/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class ParametreAppel;
class Name;

class ExprAppel: public Expr {
public: 
	ExprAppel();
	ExprAppel(Name* name, ParametreAppel* parameters);
	virtual ExprAppel();
protected: 
	Name* name;
	ParametreAppel* parameters;
};