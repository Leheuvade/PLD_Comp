/**
 * Project Untitled
 */

#pragma once

#include "InstructionStruct.h"


class Expr;

class InstructionReturn: public InstructionStruct {
friend class DebugVisit;
friend class IRVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;

InstructionReturn(Expr *expr);
   virtual  ~InstructionReturn();

protected:
	Expr *expr;

};
