/**
 * Project Untitled
 */


#pragma once

#include "InstructionStruct.h"


class StructureControle;

class InstructionControle: public InstructionStruct {
friend class DebugVisit;
friend class IRVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 


	InstructionControle(StructureControle* structControle);
    virtual ~InstructionControle();

protected:
    StructureControle* structControle;

};
