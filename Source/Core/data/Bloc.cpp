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

Bloc::Bloc(vector<Instruction*>& instructions)
{
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
}
