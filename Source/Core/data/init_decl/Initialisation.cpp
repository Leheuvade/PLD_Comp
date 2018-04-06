/**
 * Project Untitled
 */


#include "Initialisation.h"
#include "../../visitor/VisitAST.h"

VisitOutput *Initialisation::accept(VisitAST *visitor) {
    return visitor->visit(this);
}/**
 * Initialisation implementation
 */


Initialisation::Initialisation()  {
}

Initialisation::Initialisation(Type type, Name *name, bool isConst) : InitDecl(type, name) {
    this->isConst = isConst;
}

Initialisation::~Initialisation() {
}
