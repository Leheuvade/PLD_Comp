/**
 * Project Untitled
 */


#ifndef _BLOC_H
#define _BLOC_H

#include "Instructions/Instruction.h"


class Bloc: public Instruction {
public: 
	Vector<Instruction> instructions;
};

#endif //_BLOC_H