/**
 * Project Untitled
 */


#pragma once
#include "../../visitor/Visitable.h"


class Symbole : public Visitable {

friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	Symbole();
virtual ~Symbole();

};

