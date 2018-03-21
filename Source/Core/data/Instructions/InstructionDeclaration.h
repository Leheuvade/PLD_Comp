/**
 * Project Untitled
 */


#ifndef _INSTRUCTIONDECLARATION_H
#define _INSTRUCTIONDECLARATION_H

#include "Instruction.h"
#include "Declaration.h"

class Declaration;

class InstructionDeclaration: public Instruction {
public:
InstructionDeclaration::InstructionDeclaration(Declaration *declaration);
    ~InstructionDeclaration();
protected:
	Declaration* declaration;
};

#endif //_INSTRUCTIONDECLARATION_H