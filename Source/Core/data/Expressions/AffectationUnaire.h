/**
 * Project Untitled
 */


#ifndef _AFFECTATIONUNAIRE_H
#define _AFFECTATIONUNAIRE_H

#include "Affectation.h"


class AffectationUnaire: public Affectation {
public: 
	LeftValue leftValue;
	OperateurAffectationUnaire operator;
};

#endif //_AFFECTATIONUNAIRE_H