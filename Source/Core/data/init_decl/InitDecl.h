/**
 * Project Untitled
 */


#pragma once
#include "Symbole.h"


class InitDecl : public Symbole {

friend class DebugVisit; 
 public:
	InitDecl();
virtual ~InitDecl();

};

