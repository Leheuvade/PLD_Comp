/**
 * Project Untitled
 */


#ifndef _AFFECTATIONBINAIRE_H
#define _AFFECTATIONBINAIRE_H

#include "Affectation.h"
#include "../enums/OperateurAffectationBinaire.h"


class LeftValue;

class AffectationBinaire: public Affectation {

public: 
	AffectationBinaire();
	AffectationBinaire(LeftValue* leftValue, OperateurAffectationBinaire* op);
	virtual ~AffectationBinaire();
protected: 
	LeftValue* leftValue;
	OperateurAffectationBinaire* op;
};

#endif //_AFFECTATIONBINAIRE_H