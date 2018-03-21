/**
 * Project Untitled
 */


#include "ExprAppel.h"
#include "ParametreAppel.h"
#include "Name.h"

/**
 * ExprAppel implementation
 */
ExprAppel::ExprAppel(){

}
ExprAppel::ExprAppel(Name* name, ParametreAppel* parameters){
	this->name = name;
	this->parameters = parameters;
}
ExprAppel::~ExprAppel(){
	delete name;
	delete parameters;
}