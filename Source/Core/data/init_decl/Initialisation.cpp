/**
 * Project Untitled
 */


#include "Initialisation.h"

/**
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
