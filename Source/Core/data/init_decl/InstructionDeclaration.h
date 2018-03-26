/**
 * Project Untitled
 */


#pragma once

#include "InitDecl.h"

class Declaration;

class InstructionDeclaration: public InitDecl {
public:

InstructionDeclaration(Declaration *declaration);
   virtual ~InstructionDeclaration();
protected:
	Declaration* declaration;
};

