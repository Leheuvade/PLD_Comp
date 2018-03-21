/**
 * Project Untitled
 */


#pragma once

#include "Instruction.h"
#include "Declaration.h"

class InstructionDeclaration: public Instruction {
public:
InstructionDeclaration::InstructionDeclaration(Declaration* declaration);
    ~InstructionDeclaration();
protected:
	Declaration* declaration;
};

