/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"
#include "Initialisation.h"

class Initialisation;

class InstructionInit: public Instruction {
public:
InstructionInit(Initialisation *initialisation);
    ~InstructionInit();

protected:
	Initialisation *initialisation;
};
