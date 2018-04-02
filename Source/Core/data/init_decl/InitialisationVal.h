/**
 * Project Untitled
 */


#pragma once
#include "Initialisation.h"

class Val; 

class InitialisationVal : public Initialisation {


friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	InitialisationVal();
	InitialisationVal(Type type, Name *name,  bool isConst,Val * value);
	virtual ~InitialisationVal();

protected:
	
	Val* value;
};
