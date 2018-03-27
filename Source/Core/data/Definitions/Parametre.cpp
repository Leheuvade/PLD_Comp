#include "Parametre.h"

Parametre::Parametre(Type t, Name *n, bool b)
{
	type = t;
	name = n;
	hasBrackets = b;

}

Parametre::~Parametre()
{
	delete name;
}