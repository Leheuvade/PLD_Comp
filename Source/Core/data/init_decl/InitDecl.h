/**
 * Project Untitled
 */


#pragma once
#include "Symbole.h"


class InitDecl : public Symbole {

friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	InitDecl();
virtual ~InitDecl();

};

