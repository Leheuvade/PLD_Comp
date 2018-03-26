/**
 * Project Untitled
 */


#pragma once

#include "InitDecl.h"

class Initialisation;

class InstructionInit: public InitDecl {
public:
InstructionInit(Initialisation *initialisation);
    virtual ~InstructionInit();

protected:
	Initialisation *initialisation;
};
