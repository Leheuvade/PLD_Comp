/**
 * Project Untitled
 */


#include "LeftValue.h"

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
