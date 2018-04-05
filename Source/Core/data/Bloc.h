/**
 * Project Untitled
 */

#pragma once

#include <vector>
#include "Instructions/InstructionStruct.h"
#include "init_decl/InitDecl.h"
#include "Definitions/Definition.h"

using namespace std;

class Bloc : public Visitable {
	friend class MapperSymbol;
	friend class DebugVisit;
friend class IRVisit;
friend class MappingNameVisit;
	friend class MappingNameVisit;
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	Bloc();
	Bloc(vector<InitDecl*> &initDecl, vector<InstructionStruct*> instructions);
	virtual ~Bloc();
protected:
	vector<InitDecl*> initDecl;
	vector<InstructionStruct*> instructions;
};

