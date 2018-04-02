/**
 * Project Untitled
 */


#include "VarGlobaleInitialisation.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* VarGlobaleInitialisation::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * VarGlobaleInitialisation implementation
 */

VarGlobaleInitialisation::VarGlobaleInitialisation(){}

VarGlobaleInitialisation::VarGlobaleInitialisation(Initialisation *initialisation) : VarGlobale() {
  this->initialisation = initialisation;
}

VarGlobaleInitialisation::~VarGlobaleInitialisation(){
  delete initialisation;
}
