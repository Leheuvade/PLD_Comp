/**
 * Project Untitled
 */


#include "Symbole.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Symbole::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}Symbole::Symbole()
{
}

Symbole::~Symbole()
{
}

