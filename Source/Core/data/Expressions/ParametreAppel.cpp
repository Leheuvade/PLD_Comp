/**
 * Project Untitled
 */


#include "ParametreAppel.h"

/**
 * ParametreAppel implementation
 */
ParametreAppel::ParametreAppel(){}

ParametreAppel::ParametreAppel(vector<Expr*> &parameters){
	this->parameters = parameters;
}
ParametreAppel::~ParametreAppel()
{
	for (int i = 0; i<parameters.size(); i++)
	{
		if (parameters[i])
		{
			delete parameters[i];
		}
	}
}