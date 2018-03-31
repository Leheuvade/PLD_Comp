/**
 * Project Untitled
 */


#include "LeftValue.h" 
#include "../visitor/VisitAST.h"

VisitOutput* LeftValue::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}

/**
 * LeftValue implementation
 */
LeftValue::LeftValue()
{
	name = nullptr;
}

LeftValue::LeftValue(Name* name)
{
	this->name = name;
}

LeftValue::~LeftValue()
{
	delete name;
}
