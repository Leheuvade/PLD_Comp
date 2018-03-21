/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"
#include "Initialisation.h"

class InstructionInit: public Instruction {
public:
InstructionInit::InstructionInit(Initialisation initialisation);
    ~InstructionInit();

protected:
	Initialisation initialisation;
};
