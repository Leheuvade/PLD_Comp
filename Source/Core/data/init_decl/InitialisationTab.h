/**
 * Project Untitled
 */


#ifndef _INITIALISATIONTAB_H
#define _INITIALISATIONTAB_H

#include "Initialisation.h"


class InitialisationTab: public Initialisation {



public:
	InitialisationTab(Val size,ParametreAppel valeurs);
	InitialisationTab();
	~InitialisationTab()

protected:
	Val size;
	ParametreAppel valeurs;
};

#endif //_INITIALISATIONTAB_H
