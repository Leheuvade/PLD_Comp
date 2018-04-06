/**
 * Project Untitled
 */

#include "Visitable.h"
#include "VisitAST.h"


Visitable::Visitable()
{
}

Visitable::~Visitable()
{
}

VisitOutput* Visitable::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}

