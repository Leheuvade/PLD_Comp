/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class Affectation: public Expr {

	friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 
		Affectation();
		virtual ~Affectation();
};