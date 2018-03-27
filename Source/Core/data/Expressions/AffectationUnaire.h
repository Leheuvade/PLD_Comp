/**
 * Project Untitled
 */

#pragma once

#include "Affectation.h"
#include "../enums/OperateurAffectationUnaire.h"


class LeftValue;

class AffectationUnaire: public Affectation {

public: 
	AffectationUnaire();
	AffectationUnaire(LeftValue* leftValue, OperateurAffectationUnaire op);
	virtual ~AffectationUnaire();

protected: 
	LeftValue* leftValue;
	OperateurAffectationUnaire op;
};
