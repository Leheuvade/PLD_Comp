/**
 * Project Untitled
 */


#include "InstructionBreak.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InstructionBreak::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}InstructionBreak::InstructionBreak()
{
}

InstructionBreak::~InstructionBreak()
{
}
