#include "Parametre.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Parametre::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}Parametre::Parametre(Type t, Name *n, bool b) : Symbole(t)
{
	name = n;
	hasBrackets = b;
}

Parametre::~Parametre()
{
	delete name;
}