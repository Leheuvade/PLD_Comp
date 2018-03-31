/**
 * Project Untitled
 */


#pragma once

#include "Initialisation.h"
#include "../Expressions/Val.h"
#include "../Expressions/ParametreAppel.h"


class InitialisationTab: public Initialisation {
	friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
		InitialisationTab(Type type, Name* name, bool isConst, Val *size,ParametreAppel *valeurs);
		InitialisationTab();
		virtual ~InitialisationTab();

	protected:
		Val *size;
		ParametreAppel *valeurs;
};
