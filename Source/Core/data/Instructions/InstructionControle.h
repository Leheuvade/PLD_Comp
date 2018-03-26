/**
 * Project Untitled
 */


#pragma once

#include "InstructionStruct.h"


class StructureControle;

class InstructionControle: public InstructionStruct {
public: 


	InstructionControle(StructureControle* structControle);
    virtual ~InstructionControle();

protected:
    StructureControle* structControle;

};
