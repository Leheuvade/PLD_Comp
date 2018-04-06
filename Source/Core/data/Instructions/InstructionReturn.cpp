/**
 * Project Untitled
 */


#include "InstructionReturn.h"
#include "../Expressions/Expr.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InstructionReturn::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}InstructionReturn::InstructionReturn(Expr* e)
{
    expr = e;
}

InstructionReturn::~InstructionReturn()
{
	delete expr;
}

