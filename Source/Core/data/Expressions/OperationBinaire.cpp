/**
 * Project Untitled
 */


#include "OperationBinaire.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* OperationBinaire::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * OperationBinaire implementation
 */
OperationBinaire::OperationBinaire()
{
	
}

OperationBinaire::OperationBinaire(Expr* expr1, OperateurBinaire op, Expr* expr2){
	this->expr1 = expr1;
	this->op = op;
	this->expr2 = expr2;
}

OperationBinaire::~OperationBinaire()
{
	delete expr1;
	delete expr2;
}