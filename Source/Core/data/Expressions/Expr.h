/**
 * Project Untitled
 */

#pragma once
#include "../../visitor/Visitable.h"

class Expr : public Visitable {
friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 
	Expr();
	virtual ~Expr();
};
