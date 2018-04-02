/**
 * Project Untitled
 */


#pragma once
#include "../../visitor/Visitable.h"


class InstructionStruct : public Visitable {

friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	InstructionStruct();
virtual ~InstructionStruct();

};

