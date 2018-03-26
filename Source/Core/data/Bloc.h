/**
 * Project Untitled
 */

#pragma once

#include <vector>
#include "Instructions/InstructionStruct.h"
#include "init_decl/InitDecl.h"

using namespace std;

class Bloc {
	friend class MapperSymbol;
public:
	Bloc();
	Bloc(vector<InitDecl*> &initDecl, vector<InstructionStruct*> instructions);
	virtual ~Bloc();
protected:
	vector<InitDecl*> initDecl;
	vector<InstructionStruct*> instructions;
};

