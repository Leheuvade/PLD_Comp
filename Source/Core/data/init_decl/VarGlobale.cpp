/**
 * Project Untitled
 */


#include "VarGlobale.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* VarGlobale::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * VarGlobale implementation
 */

VarGlobale::VarGlobale() {}
VarGlobale::~VarGlobale() {}
