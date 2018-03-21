/**
 * Project Untitled
 */


#ifndef _AFFECTATIONUNAIRE_H
#define _AFFECTATIONUNAIRE_H

#include "Affectation.h"


class AffectationUnaire: public Affectation {
public: 
	LeftValue leftValue;
	OperateurAffectationUnaire op;
};

#endif //_AFFECTATIONUNAIRE_H