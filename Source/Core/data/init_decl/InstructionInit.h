/**
 * Project Untitled
 */


#pragma once

#include "InitDecl.h"

class Initialisation;

class InstructionInit: public InitDecl {
	friend class MapperSymbol;
public:
InstructionInit(Initialisation *initialisation);
    virtual ~InstructionInit();

protected:
	Initialisation *initialisation;
};
