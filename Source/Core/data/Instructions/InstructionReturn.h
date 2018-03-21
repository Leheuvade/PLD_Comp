/**
 * Project Untitled
 */


#ifndef _INSTRUCTIONRETURN_H
#define _INSTRUCTIONRETURN_H

#include "Instruction.h"
#include "Expression.h"


class Expr;

class InstructionReturn: public Instruction {
public:
InstructionReturn::InstructionReturn(Expr *expr);
    ~InstructionReturn();

protected:
	Expr *expr;
};

#endif //_INSTRUCTIONRETURN_H