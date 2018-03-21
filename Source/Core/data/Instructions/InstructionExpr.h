/**
 * Project Untitled
 */

#pragma once

#include "Instruction.h"

class Expr;

class InstructionExpr: public Instruction {
public:

InstructionExpr(Expr* expr);
    virtual ~InstructionExpr();

protected:
	Expr* expr;

};

