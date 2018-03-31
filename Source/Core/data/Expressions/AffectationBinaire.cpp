/**
 * Project Untitled
 */


#include "AffectationBinaire.h"
#include "../LeftValue.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* AffectationBinaire::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * AffectationBinaire implementation
 */

AffectationBinaire::AffectationBinaire(){

}

AffectationBinaire::AffectationBinaire(LeftValue* leftValue, OperateurAffectationBinaire op,Expr * expr){
	this->leftValue = leftValue; 
	this->op = op;
	this->expr = expr;
}

AffectationBinaire::~AffectationBinaire(){

	delete leftValue;
	delete expr;
}