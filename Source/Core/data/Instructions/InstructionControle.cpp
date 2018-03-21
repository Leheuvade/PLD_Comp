/**
 * Project Untitled
 */


#include "InstructionControle.h"
#include "../Structures/StructureControle.h"

InstructionControle::InstructionControle(StructureControle* s)
{
    structControle = s;
}

InstructionControle::~InstructionControle()
{
	delete structControle;
}
