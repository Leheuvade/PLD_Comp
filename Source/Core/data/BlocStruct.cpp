/**
 * Project Untitled
 */

#include "BlocStruct.h"
/**
 * Bloc implementation
 */
BlocStruct::BlocStruct()
{
}

BlocStruct::BlocStruct(vector<InstructionStruct*>& instructions)
{
	this->instructions = instructions;
}

BlocStruct::~BlocStruct()
{
	for(int i = 0;i<instructions.size();i++)
	{
		if(instructions[i])
		{
			delete instructions[i];
		}
	}
}
