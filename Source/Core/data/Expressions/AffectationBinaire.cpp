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

AffectationBinaire::AffectationBinaire(LeftValue* leftValue, OperateurAffectationBinaire* op,Expr * rightvalue){
	this->leftValue = leftValue; 
	this->op = op;
	this->rightValue = rightvalue;
}

AffectationBinaire::~AffectationBinaire(){

	delete leftValue;
	delete op;
	delete rightValue;
}