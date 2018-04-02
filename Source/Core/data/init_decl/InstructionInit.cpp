/**
 * Project Untitled
 */


#include "InstructionInit.h"
#include "../init_decl/Initialisation.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InstructionInit::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}InstructionInit::InstructionInit(Initialisation* i)
{
	initialisation = i;
}

InstructionInit::~InstructionInit()
{
	delete initialisation;
}
