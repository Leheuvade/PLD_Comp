/**
 * Project Untitled
 */


#include "InstructionDeclaration.h"
#include "../init_decl/Declaration.h"

InstructionDeclaration::InstructionDeclaration(Declaration* d)
{
    declaration = d;
}

InstructionDeclaration::~InstructionDeclaration()
{
	delete declaration;
}

