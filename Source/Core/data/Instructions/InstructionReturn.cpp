/**
 * Project Untitled
 */


#include "InstructionReturn.h"
#include "../Expressions/Expr.h"

InstructionReturn::InstructionReturn(Expr* e)
{
    expr = e;
}

InstructionReturn::~InstructionReturn()
{
	delete expr;
}

