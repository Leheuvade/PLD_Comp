/**
 * Project Untitled
 */


#include "OperationUnaire.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* OperationUnaire::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * OperationUnaire implementation
 */
OperationUnaire::OperationUnaire(){

}
OperationUnaire::OperationUnaire(Expr* expr, OperateurUnaire op){
	this->expr = expr;
	this->op = op;
}
OperationUnaire::~OperationUnaire(){
	delete expr;
}