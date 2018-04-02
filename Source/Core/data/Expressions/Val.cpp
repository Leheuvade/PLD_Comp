/**
 * Project Untitled
 */


#include "Val.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Val::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * Val implementation
 */
Val::Val(){}
Val::Val(int val){
	this->val = val;
}
Val::~Val(){}
