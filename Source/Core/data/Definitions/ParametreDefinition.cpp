/**
 * Project Untitled
 */


#include "ParametreDefinition.h"
#include "Parametre.h"

ParametreDefinition::ParametreDefinition()
{
    parameters = nullptr;
}

ParametreDefinition::ParametreDefinition(vector<Parametre*> p)
{
    parameters=p;
}

ParametreDefinition::~ParametreDefinition()
{
  if(parameters){
    for (int i = 0; i<parameters.size(); i++)
  	{
  		if (parameters[i])
  		{
  			delete parameters[i];
  		}
  	}
  }
}
