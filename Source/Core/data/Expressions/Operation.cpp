/**
 * Project Untitled
 */


#include "Operation.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Operation::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * Operation implementation
 */
Operation::Operation(){}
Operation::~Operation(){}
