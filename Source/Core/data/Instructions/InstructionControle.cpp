/**
 * Project Untitled
 */


#include "InstructionControle.h"
#include "../Structures/StructureControle.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InstructionControle::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}InstructionControle::InstructionControle(StructureControle* s)
{
    structControle = s;
}

InstructionControle::~InstructionControle()
{
	delete structControle;
}
