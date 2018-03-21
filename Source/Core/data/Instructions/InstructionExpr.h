/**
 * Project Untitled
 */


#ifndef _INSTRUCTIONEXPR_H
#define _INSTRUCTIONEXPR_H

#include "Instruction.h"


class InstructionExpr: public Instruction {
public: 
	Expr expr;
};

#endif //_INSTRUCTIONEXPR_H