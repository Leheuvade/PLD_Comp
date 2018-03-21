/**
 * Project Untitled
 */


#pragma once

#include "VarGlobale.h"
#include "Initialisation.h"

class VarGlobaleInitialisation: public VarGlobale {
	public:
		VarGlobaleInitialisation();
		VarGlobaleInitialisation(Initialisation *initialisation);
		virtual ~VarGlobaleInitialisation();
	protected:
		Initialisation *initialisation;
};
