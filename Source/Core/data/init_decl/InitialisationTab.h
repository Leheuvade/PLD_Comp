/**
 * Project Untitled
 */


#ifndef _INITIALISATIONTAB_H
#define _INITIALISATIONTAB_H

#include "Initialisation.h"
#include "../Expressions/Val.h"
#include "../Expressions/ParametreAppel.h"


class InitialisationTab: public Initialisation {
public: 
	Val *size;
	ParametreAppel *valeurs;
};

#endif //_INITIALISATIONTAB_H