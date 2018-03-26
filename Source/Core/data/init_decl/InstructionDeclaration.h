/**
 * Project Untitled
 */


#pragma once

#include "InitDecl.h"

class Declaration;

class InstructionDeclaration: public InitDecl {
	friend class MapperSymbol;
public:

InstructionDeclaration(Declaration *declaration);
   virtual ~InstructionDeclaration();
protected:
	Declaration* declaration;
};

