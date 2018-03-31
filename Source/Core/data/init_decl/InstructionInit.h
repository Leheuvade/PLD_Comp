/**
 * Project Untitled
 */


#pragma once

#include "InitDecl.h"

class Initialisation;

class InstructionInit: public InitDecl {
	friend class MapperSymbol;
friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
InstructionInit(Initialisation *initialisation);
    virtual ~InstructionInit();

protected:
	Initialisation *initialisation;
};
