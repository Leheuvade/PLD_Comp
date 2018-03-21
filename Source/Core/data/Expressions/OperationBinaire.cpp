/**
 * Project Untitled
 */


#include "OperationBinaire.h"

/**
 * OperationBinaire implementation
 */
OperationBinaire::OperationBinaire(){}

OperationBinaire::OperationBinaire(Expr* expr1, OperateurUnaire* op, Expr* expr2){
	this->expr1 = expr1;
	this->expr2 = expr2;
}

OperationBinaire::~OperationBinaire(){}