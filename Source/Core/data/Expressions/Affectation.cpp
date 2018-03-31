/**
 * Project Untitled
 */


#include "Affectation.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Affectation::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * Affectation implementation
 */

Affectation::Affectation() {
}

Affectation::~Affectation() {
}