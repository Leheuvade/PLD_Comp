/**
 * Project Untitled
 */

#pragma once


#include "Instructions/Instruction.h"
#include <vector>

using namespace std;
class Bloc: public Instruction {
public:
	Bloc();
	Bloc(vector<Instruction*> &instructions);
	virtual ~Bloc();
protected:
	vector<Instruction*> instructions;
};

