/**
 * Project Untitled
 */

#pragma once
#include "VisitOutput.h"
class VisitAST;
class Visitable {
 public: 
	 Visitable();
	virtual ~Visitable();

	virtual VisitOutput* accept(VisitAST* visitor);
	
};
