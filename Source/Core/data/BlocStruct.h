/**
 * Project Untitled
 */

#pragma once

#include <vector>

#include "Instructions/InstructionStruct.h"

using namespace std;

class BlocStruct: public InstructionStruct {
friend class DebugVisit; 
 public:
	BlocStruct();
	BlocStruct(vector<InstructionStruct*> &instructions);
	virtual ~BlocStruct();
protected:
	vector<InstructionStruct*> instructions;
};

