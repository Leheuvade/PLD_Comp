/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class ParametreAppel;
class Name;

class ExprAppel: public Expr {
friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 
	ExprAppel();
	ExprAppel(Name* name, ParametreAppel* parameters);
	virtual ~ExprAppel();
protected: 
	Name* name;
	ParametreAppel* parameters;
};