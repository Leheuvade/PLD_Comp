/**
 * Project Untitled
 */


#ifndef _AFFECTATIONBINAIRE_H
#define _AFFECTATIONBINAIRE_H

#include "Affectation.h"


class AffectationBinaire: public Affectation {
public: 
	LeftValue leftValue;
	OPerateurAffectationBinaire operator;
};

#endif //_AFFECTATIONBINAIRE_H