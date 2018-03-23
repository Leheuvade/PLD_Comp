/**
 * Project Untitled
 */

#pragma once

#include <vector>

#include "Instructions/Instruction.h"

using namespace std;

class Bloc: public Instruction {
public:
	Bloc();
	Bloc(vector<Instruction*> &instructions);
	virtual ~Bloc();
protected:
	vector<Instruction*> instructions;
};

