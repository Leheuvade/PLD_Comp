/**
 * Project Untitled
 */


#ifndef _INSTRUCTIONINIT_H
#define _INSTRUCTIONINIT_H

#include "Instruction.h"
#include "Initialisation.h"

class InstructionInit: public Instruction {
public:
InstructionInit::InstructionInit(Initialisation initialisation);
    ~InstructionInit();

protected:
	Initialisation initialisation;
};

#endif //_INSTRUCTIONINIT_H