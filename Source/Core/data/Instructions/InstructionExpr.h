/**
 * Project Untitled
 */

#pragma once

#include "Instruction.h"
#include "Expression.h"

class Expr;

class InstructionExpr: public Instruction {
public:

InstructionExpr(Expr* expr);
    ~InstructionExpr();

protected:
	Expr* expr;

};

