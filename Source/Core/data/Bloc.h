/**
 * Project Untitled
 */

#pragma once

#include <vector>
#include "Instructions/InstructionStruct.h"
#include "init_decl/InitDecl.h"
#include "Definitions/Definition.h"

using namespace std;

class Bloc {
	friend class MapperSymbol;
friend class DebugVisit; 
 public:
	Bloc();
	Bloc(vector<InitDecl*> &initDecl, vector<InstructionStruct*> instructions);
	void setDefinition(Definition * definition);
	virtual ~Bloc();
protected:
	Definition * definition; 
	vector<InitDecl*> initDecl;
	vector<InstructionStruct*> instructions;
};

