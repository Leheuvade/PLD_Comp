/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"
#include "StructureControle.h"


class StructureControle;

class InstructionControle: public Instruction {
public: 


	InstructionControle(StructureControle* structControle);
    ~InstructionControle();

protected:
    StructureControle* structControle;

};
