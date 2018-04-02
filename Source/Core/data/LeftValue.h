/**
 * Project Untitled
 */


#pragma once

#include "Expressions/Name.h"

class LeftValue : public Visitable {
	friend class DebugVisit;
	friend class MappingNameVisit;

 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 
	LeftValue();
	LeftValue(Name * name);
	virtual ~LeftValue();
protected:
	Name *name;
};

