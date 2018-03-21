/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"


class StructureControle;

class InstructionControle: public Instruction {
public: 


	InstructionControle(StructureControle* structControle);
    virtual ~InstructionControle();

protected:
    StructureControle* structControle;

};
