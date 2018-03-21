/**
 * Project Untitled
 */


#include "ParametreAppel.h"

/**
 * ParametreAppel implementation
 */
ParametreAppel::ParametreAppel(){}
ParametreAppel::ParametreAppel(Vector<Expr*> parameters){
	this->parameters = parameters;
}
virtual ParametreAppel::~ParametreAppel(){}