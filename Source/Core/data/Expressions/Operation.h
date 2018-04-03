/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class Operation: public Expr {
friend class DebugVisit;
friend class IRVisit;

 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	Operation();
	virtual ~Operation();
};