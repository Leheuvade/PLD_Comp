/**
 * Project Untitled
 */

#pragma once

#include "Instruction.h"
#include "Expression.h"

class InstructionExpr: public Instruction {
public:
InstructionExpr::InstructionExpr(Expr expr);
    ~InstructionExpr();

protected:
	Expr expr;
};

