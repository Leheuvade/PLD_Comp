/**
 * Project Untitled
 */


#include "ParametreDefinition.h"
#include "Parametre.h"

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
