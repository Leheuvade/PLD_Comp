/**
 * Project Untitled
 */


#include "AffectationBinaire.h"
#include "../LeftValue.h"

/**
 * AffectationBinaire implementation
 */

AffectationBinaire::AffectationBinaire(){

}

AffectationBinaire::AffectationBinaire(LeftValue* leftValue, OperateurAffectationBinaire op,Expr * Expr){
	this->leftValue = leftValue; 
	this->op = op;
	this->Expr = Expr;
}

AffectationBinaire::~AffectationBinaire(){

	delete leftValue;
	delete Expr;
}