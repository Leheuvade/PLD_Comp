/**
 * Project Untitled
 */
#pragma once

#include "Expr.h"


class Affectation: public Expr {

	friend class DebugVisit; 
 public: 
		Affectation();
		virtual ~Affectation();
};