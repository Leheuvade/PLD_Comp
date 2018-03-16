/**
 * Project Untitled
 */


#ifndef _INSTRUCTIONRETURN_H
#define _INSTRUCTIONRETURN_H

#include "Instruction.h"


class InstructionReturn: public Instruction {
public: 
	Expr expr;
};

#endif //_INSTRUCTIONRETURN_H