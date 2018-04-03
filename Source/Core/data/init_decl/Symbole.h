/**
 * Project Untitled
 */


#pragma once
#include "../../visitor/Visitable.h"


class Symbole : public Visitable {

friend class DebugVisit;
friend class IRVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	Symbole();
virtual ~Symbole();

};

