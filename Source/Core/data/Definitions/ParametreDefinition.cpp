/**
 * Project Untitled
 */


#include "ParametreDefinition.h"
#include "Parametre.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* ParametreDefinition::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}ParametreDefinition::ParametreDefinition()
{
}

ParametreDefinition::ParametreDefinition(vector<Parametre*> p)
{
    parameters=p;
}

ParametreDefinition::~ParametreDefinition()
{
    for (int i = 0; i<parameters.size(); i++)
  	{
  		if (parameters[i])
  		{
  			delete parameters[i];
  		}
  	}
}
