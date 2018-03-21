/**
 * Project Untitled
 */


#include "AffectationBinaire.h"

/**
 * AffectationBinaire implementation
 */

AffectationBinaire::AffectationBinaire(){

}

AffectationBinaire::AffectationBinaire(LeftValue* leftValue, OperateurAffectationBinaire* op){
	this->leftValue = leftValue; 
	this->op = op;
}

virtual AffectationBinaire::~AffectationBinaire(){

}