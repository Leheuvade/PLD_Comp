/**
 * Project Untitled
 */


#ifndef _INSTRUCTIONCONTROLE_H
#define _INSTRUCTIONCONTROLE_H

#include "Instruction.h"
#include "StructureControle.h"


class StructureControle;

class InstructionControle: public Instruction {
public: 

	InstructionControle::InstructionControle(StructureControle *structControle);
    ~InstructionControle();

protected:
    StructureControle *structControle;
};

#endif //_INSTRUCTIONCONTROLE_H