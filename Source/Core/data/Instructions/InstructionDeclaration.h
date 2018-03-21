/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"
#include "Declaration.h"

class Declaration;

class InstructionDeclaration: public Instruction {
public:

InstructionDeclaration(Declaration *declaration);
    ~InstructionDeclaration();
protected:
	Declaration* declaration;
};

