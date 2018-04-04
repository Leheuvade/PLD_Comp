/**
 * Project Untitled
 */


#pragma once
#include "InstructionStruct.h"


class InstructionBreak: public InstructionStruct {

friend class DebugVisit;
friend class IRVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
InstructionBreak();
virtual ~InstructionBreak();

};

