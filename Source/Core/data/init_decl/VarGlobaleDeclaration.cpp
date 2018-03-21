/**
 * Project Untitled
 */


#include "VarGlobaleDeclaration.h"

/**
 * VarGlobaleDeclaration implementation
 */

VarGlobaleDeclaration::VarGlobaleDeclaration() {}

VarGlobaleDeclaration(Declaration *declaration) : VarGlobale() {
	this->declaration = declaration;
}
~VarGlobaleDeclaration() {
  delete declaration;
}
