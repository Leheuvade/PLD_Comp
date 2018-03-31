/**
 * Project Untitled
 */


#include "InstructionExpr.h"
#include "../Expressions/Expr.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InstructionExpr::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}InstructionExpr::InstructionExpr(Expr* e)
{
    expr = e;
}

InstructionExpr::~InstructionExpr()
{
	delete expr;
}
