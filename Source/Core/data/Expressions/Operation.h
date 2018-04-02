/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class Operation: public Expr {
friend class DebugVisit;

 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	Operation();
	virtual ~Operation();
};