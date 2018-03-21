/**
 * Project Untitled
 */


#include "InstructionExpr.h"
#include "../Expressions/Expr.h"

InstructionExpr::InstructionExpr(Expr* e)
{
    expr = e;
}

InstructionExpr::~InstructionExpr()
{
	delete expr;
}
