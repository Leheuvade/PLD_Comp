/**
 * Project Untitled
 */


#ifndef _BLOC_H
#define _BLOC_H

#include "Instructions/Instruction.h"
#include <vector>

using namespace std;
class Bloc: public Instruction {
public:
	vector<Instruction> instructions;
};

#endif //_BLOC_H