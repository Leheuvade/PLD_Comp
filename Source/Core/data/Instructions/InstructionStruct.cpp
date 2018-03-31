/**
 * Project Untitled
 */


#include "InstructionStruct.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InstructionStruct::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}InstructionStruct::InstructionStruct()
{
}

InstructionStruct::~InstructionStruct()
{
}

