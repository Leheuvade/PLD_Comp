/**
 * Project Untitled
 */


#include "Name.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Name::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}

/**
 * Name implementation
 */

Name::Name(){

}

Name::Name(string name){
	this->name = name;
}

void Name::setSymbol(Symbole * symbole){
	this->symbole = symbole;
}
Name::~Name(){
	 
}
