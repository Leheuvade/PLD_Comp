/**
 * Project Untitled
 */


#pragma once

#include "VarGlobale.h"
#include "Initialisation.h"

class VarGlobaleInitialisation: public VarGlobale {
	friend class MapperSymbol;
	public:
		VarGlobaleInitialisation();
		VarGlobaleInitialisation(Initialisation *initialisation);
		virtual ~VarGlobaleInitialisation();
	protected:
		Initialisation *initialisation;
};
