/**
 * Project Untitled
 */


#pragma once
#include "InstructionStruct.h"


class InstructionBreak: public InstructionStruct {

friend class DebugVisit; 
 public:
InstructionBreak();
virtual ~InstructionBreak();

};

