/**
 * Project Untitled
 */


#include "Char.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Char::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * Char implementation
 */
Char::Char(){

}

Char::Char(char val){
	this->val = val;
}

Char::~Char(){

}

