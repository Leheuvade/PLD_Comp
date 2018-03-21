/**
 * Project Untitled
 */
#pragma once

#include "Affectation.h"
#include "../enums/OperateurAffectationBinaire.h"


class LeftValue;

class AffectationBinaire: public Affectation {

public: 
	AffectationBinaire();
	AffectationBinaire(LeftValue* leftValue, OperateurAffectationBinaire* op,Expr * rightvalue);
	virtual ~AffectationBinaire();
protected: 
	LeftValue* leftValue;
	OperateurAffectationBinaire* op;
	Expr* rightValue;
};
