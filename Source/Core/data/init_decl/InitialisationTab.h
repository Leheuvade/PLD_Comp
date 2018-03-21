/**
 * Project Untitled
 */


#pragma once

#include "Initialisation.h"
#include "../Expressions/Val.h"
#include "../Expressions/ParametreAppel.h"


class InitialisationTab: public Initialisation {




public:
	InitialisationTab(Val *size,ParametreAppel *valeurs);
	InitialisationTab();
	~InitialisationTab()

protected:
	Val *size;
	ParametreAppel *valeurs;

};

