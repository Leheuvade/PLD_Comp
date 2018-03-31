/**
 * Project Untitled
 */

#include "BlocStruct.h"
#include "../visitor/VisitAST.h"

/**
 * Bloc implementation
 */
 VisitOutput* BlocStruct::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}
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
