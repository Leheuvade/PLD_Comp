/**
 * Project Untitled
 */


#include "InstructionDeclaration.h"
#include "../init_decl/Declaration.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InstructionDeclaration::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}InstructionDeclaration::InstructionDeclaration(Declaration* d)
{
    declaration = d;
}

InstructionDeclaration::~InstructionDeclaration()
{
	delete declaration;
}

