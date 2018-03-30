/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class Operation: public Expr {
friend class DebugVisit; 
 public:
	Operation();
	virtual ~Operation();
};