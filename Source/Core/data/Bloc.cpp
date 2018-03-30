/**
 * Project Untitled
 */

#include "Bloc.h"
/**
 * Bloc implementation
 */
Bloc::Bloc()
{
}

Bloc::Bloc(vector<InitDecl*> &initDecl, vector<InstructionStruct*> instructions)
{
	this->initDecl = initDecl;
	this->instructions = instructions;
}
void Bloc::setDefinition(Definition * definition)
{
	this->definition =definition;
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
