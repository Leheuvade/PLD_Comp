/**
 * Project Untitled
 */

#include "Bloc.h"
#include "../visitor/VisitAST.h"

/**
 * Bloc implementation
 */
 VisitOutput* Bloc::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}
Bloc::Bloc()
{
}

Bloc::Bloc(vector<InitDecl*> &initDecl, vector<InstructionStruct*> instructions)
{
	this->initDecl = initDecl;
	this->instructions = instructions;
}

Bloc::~Bloc()
{
	for(int i = 0;i<instructions.size();i++)
	{
		if(instructions[i])
		{
			delete instructions[i];
		}
	}
	for (int i = 0; i<initDecl.size(); i++)
	{
		if (initDecl[i])
		{
			delete initDecl[i];
		}
	}
}
