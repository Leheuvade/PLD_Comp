/**
 * Project Untitled
 */


#include "Expr.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Expr::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * Expr implementation
 */
Expr::Expr(){

}

Expr::~Expr(){
}