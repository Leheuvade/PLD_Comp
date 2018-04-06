/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class Char: public Expr {
friend class DebugVisit;
friend class IRVisit;
friend class MappingNameVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 
	Char();
	Char(char val);
	virtual ~Char();

protected: 
	char val;
};