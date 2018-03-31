/**
 * Project Untitled
 */


#include "VarGlobaleDeclaration.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* VarGlobaleDeclaration::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
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
