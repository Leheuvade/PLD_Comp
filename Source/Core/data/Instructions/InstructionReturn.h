/**
 * Project Untitled
 */

#pragma once

#include "Instruction.h"
#include "Expression.h"


class InstructionReturn: public Instruction {
public:
InstructionReturn::InstructionReturn(Expr expr);
    ~InstructionReturn();

protected:
	Expr expr;
};
