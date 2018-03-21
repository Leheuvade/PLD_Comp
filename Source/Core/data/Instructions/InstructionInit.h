/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"

class Initialisation;

class InstructionInit: public Instruction {
public:
InstructionInit(Initialisation *initialisation);
    virtual ~InstructionInit();

protected:
	Initialisation *initialisation;
};
