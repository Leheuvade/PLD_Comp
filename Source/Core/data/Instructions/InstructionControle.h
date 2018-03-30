/**
 * Project Untitled
 */


#pragma once

#include "InstructionStruct.h"


class StructureControle;

class InstructionControle: public InstructionStruct {
friend class DebugVisit; 
 public: 


	InstructionControle(StructureControle* structControle);
    virtual ~InstructionControle();

protected:
    StructureControle* structControle;

};
