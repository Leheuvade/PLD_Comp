/**
 * Project Untitled
 */

#pragma once

#include "Expr.h"


class Val: public Expr {
friend class DebugVisit; 
 public: 
	Val();
	Val(int val);
	virtual ~Val();
protected: 
	int val;
};
