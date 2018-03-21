/**
 * Project Untitled
 */


#ifndef _AFFECTATIONUNAIRE_H
#define _AFFECTATIONUNAIRE_H

#include "Affectation.h"


class AffectationUnaire: public Affectation {

public: 
	AffectationUnaire();
	AffectationUnaire(LeftValue* leftValue, OperateurAffectationUnaire* op);
	virtual ~AffectationUnaire();

protected: 
	LeftValue* leftValue;
	OperateurAffectationUnaire* op;
};

#endif //_AFFECTATIONUNAIRE_H