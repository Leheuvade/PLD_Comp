/**
 * Project Untitled
 */


#pragma once
#include "../../visitor/Visitable.h"


class InstructionStruct : public Visitable {

friend class DebugVisit;
friend class IRVisit;
friend class MappingNameVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	InstructionStruct();
virtual ~InstructionStruct();

};

