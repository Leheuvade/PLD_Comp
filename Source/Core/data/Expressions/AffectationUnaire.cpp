/**
 * Project Untitled
 */


#include "AffectationUnaire.h"
#include "../LeftValue.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* AffectationUnaire::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * AffectationUnaire implementation
 */
AffectationUnaire::AffectationUnaire(){

}

AffectationUnaire::AffectationUnaire(LeftValue* leftValue, OperateurAffectationUnaire op){
	this->leftValue = leftValue;
	this->op = op;
}

AffectationUnaire::~AffectationUnaire(){
	delete leftValue;
}