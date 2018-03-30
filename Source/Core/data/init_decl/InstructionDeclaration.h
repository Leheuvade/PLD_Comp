/**
 * Project Untitled
 */


#pragma once

#include "InitDecl.h"

class Declaration;

class InstructionDeclaration: public InitDecl {
	friend class MapperSymbol;
friend class DebugVisit; 
 public:

InstructionDeclaration(Declaration *declaration);
   virtual ~InstructionDeclaration();
protected:
	Declaration* declaration;
};

