/**
 * Project Untitled
 */


#include "VarGlobaleInitialisation.h"

/**
 * VarGlobaleInitialisation implementation
 */

VarGlobaleInitialisation::VarGlobaleInitialisation(){}

VarGlobaleInitialisation::VarGlobaleInitialisation(Initialisation *initialisation) : VarGlobale() {
  this->initialisation = initialisation;
}

VarGlobaleInitialisation::~VarGlobaleInitialisation(){
  delete initialisation;
}
