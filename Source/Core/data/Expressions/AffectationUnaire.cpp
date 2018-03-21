/**
 * Project Untitled
 */


#include "AffectationUnaire.h"

/**
 * AffectationUnaire implementation
 */
AffectationUnaire::AffectationUnaire(){

}

AffectationUnaire::AffectationUnaire(LeftValue* leftValue, OperateurAffectationUnaire* op){
	this->leftValue = leftValue;
	this->op = op;
}

AffectationUnaire::~AffectationUnaire(){

}