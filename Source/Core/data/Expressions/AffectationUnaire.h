/**
 * Project Untitled
 */

#pragma once

#include "Affectation.h"
#include "../enums/OperateurAffectationUnaire.h"


class LeftValue;

class AffectationUnaire: public Affectation {

friend class DebugVisit; 
 public: 
	AffectationUnaire();
	AffectationUnaire(LeftValue* leftValue, OperateurAffectationUnaire op);
	virtual ~AffectationUnaire();

protected: 
	LeftValue* leftValue;
	OperateurAffectationUnaire op;
};
