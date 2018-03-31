/**
 * Project Untitled
 */


#include "Initialisation.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Initialisation::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * Initialisation implementation
 */


Initialisation::Initialisation(){
  name = nullptr;
}

Initialisation::Initialisation(Type type,Name * name,bool isConst){
   this->type = type;
   this->name = name;
   this->isConst = isConst;
}

Initialisation::~Initialisation(){
	delete name;
 }
