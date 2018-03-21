/**
 * Project Untitled
 */


#ifndef _INSTRUCTIONEXPR_H
#define _INSTRUCTIONEXPR_H

#include "Instruction.h"
#include "Expression.h"

class Expr;

class InstructionExpr: public Instruction {
public:
InstructionExpr::InstructionExpr(Expr *expr);
    ~InstructionExpr();

protected:
	Expr *expr;
};

#endif //_INSTRUCTIONEXPR_H