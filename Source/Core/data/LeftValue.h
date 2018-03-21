/**
 * Project Untitled
 */


#pragma once

#include "Expressions/Name.h"

class LeftValue {
public: 
	LeftValue();
	LeftValue(Name * name);
	virtual ~LeftValue();
protected:
	Name *name;
};

