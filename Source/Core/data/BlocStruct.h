/**
 * Project Untitled
 */

#pragma once

#include <vector>

#include "Instructions/InstructionStruct.h"

using namespace std;

class BlocStruct: public InstructionStruct {
friend class DebugVisit;
friend class IRVisit;
	friend class MappingNameVisit;
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	BlocStruct();
	BlocStruct(vector<InstructionStruct*> &instructions);
	virtual ~BlocStruct();
protected:
	vector<InstructionStruct*> instructions;
};

