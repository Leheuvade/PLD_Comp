/**
 * Project Untitled
 */


#pragma once

#include "VarGlobale.h"
#include "Initialisation.h"

class VarGlobaleInitialisation: public VarGlobale {
	friend class MapperSymbol;
	friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
		VarGlobaleInitialisation();
		VarGlobaleInitialisation(Initialisation *initialisation);
		virtual ~VarGlobaleInitialisation();
	protected:
		Initialisation *initialisation;
};
