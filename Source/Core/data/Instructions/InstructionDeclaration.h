/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"

class Declaration;

class InstructionDeclaration: public Instruction {
public:

InstructionDeclaration(Declaration *declaration);
   virtual ~InstructionDeclaration();
protected:
	Declaration* declaration;
};

