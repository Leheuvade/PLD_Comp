/**
 * Project Untitled
 */

#pragma once

#include "Instruction.h"
#include "Expression.h"


class Expr;

class InstructionReturn: public Instruction {
public:

InstructionReturn(Expr *expr);
    ~InstructionReturn();

protected:
	Expr *expr;

};
