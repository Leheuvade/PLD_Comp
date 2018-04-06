/**
 * Project Untitled
 */


#include "Programme.h"
#include "Definitions/Definition.h"
#include "../visitor/VisitAST.h"

/**
 * Programme implementation
 */
Programme::Programme()
{
}

Programme::Programme(vector<InitDecl*>& varGlobales, vector<Definition*>& definitions)
{
	this->varGlobales = varGlobales;
	this->definitions = definitions;
}

Programme::~Programme()
{
	for (int i = 0; i<varGlobales.size(); i++)
	{
		if (varGlobales[i])
		{
			delete varGlobales[i];
		}
	}
	for (int i = 0; i<definitions.size(); i++)
	{
		if (definitions[i])
		{
			delete definitions[i];
		}
	}

}

VisitOutput* Programme::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}
