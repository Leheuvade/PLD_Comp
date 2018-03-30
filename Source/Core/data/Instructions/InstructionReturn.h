/**
 * Project Untitled
 */

#pragma once

#include "InstructionStruct.h"


class Expr;

class InstructionReturn: public InstructionStruct {
friend class DebugVisit; 
 public:

InstructionReturn(Expr *expr);
   virtual  ~InstructionReturn();

protected:
	Expr *expr;

};
