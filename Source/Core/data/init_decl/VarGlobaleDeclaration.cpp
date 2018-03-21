/**
 * Project Untitled
 */


#include "VarGlobaleDeclaration.h"

/**
 * VarGlobaleDeclaration implementation
 */

VarGlobaleDeclaration::VarGlobaleDeclaration()
{
	declaration = nullptr;
}

VarGlobaleDeclaration::VarGlobaleDeclaration(Declaration *declaration)  {
	this->declaration = declaration;
}
VarGlobaleDeclaration::~VarGlobaleDeclaration() {
  delete declaration;
}
