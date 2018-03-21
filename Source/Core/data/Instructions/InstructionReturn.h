/**
 * Project Untitled
 */

#pragma once

#include "Instruction.h"


class Expr;

class InstructionReturn: public Instruction {
public:

InstructionReturn(Expr *expr);
   virtual  ~InstructionReturn();

protected:
	Expr *expr;

};
