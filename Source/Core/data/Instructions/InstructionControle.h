/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"
#include "StructureControle.h"


class InstructionControle: public Instruction {
public: 

	InstructionControle::InstructionControle(StructureControle* structControle);
    ~InstructionControle();

protected:
    StructureControle* structControle;
};
