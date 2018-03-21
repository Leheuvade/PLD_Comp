/**
 * Project Untitled
 */


#include "InstructionInit.h"
#include "../init_decl/Initialisation.h"

InstructionInit::InstructionInit(Initialisation* i)
{
	initialisation = i;
}

InstructionInit::~InstructionInit()
{
	delete initialisation;
}
