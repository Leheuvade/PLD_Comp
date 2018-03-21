/**
 * Project Untitled
 */


#ifndef _VARGLOBALEINITIALISATION_H
#define _VARGLOBALEINITIALISATION_H

#include "VarGlobale.h"
#include "Initialisation.h"


class VarGlobaleInitialisation: public VarGlobale {
public:
VarGlobaleInitialisation();
VarGlobaleInitialisation(Initialisation *initialisation);
~VarGlobaleInitialisation();
protected: 
	Initialisation *initialisation;
};

#endif //_VARGLOBALEINITIALISATION_H