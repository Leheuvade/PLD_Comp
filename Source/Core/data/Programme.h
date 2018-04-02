/**
 * Project Untitled
 */


#pragma once

#include "init_decl/VarGlobale.h"
#include <vector> 
using namespace std;

class Definition;

using namespace std;
class Programme : public Visitable {
	friend class MapperSymbol;
	friend class VisitAST;
	friend class DebugVisit;
	friend class MappingNameVisit;
public:
	Programme();
	Programme(vector<VarGlobale*> &varGlobales, vector<Definition*> &definitions);
	virtual ~Programme();
	virtual VisitOutput* accept(VisitAST* visitor)override;

protected:
	vector<VarGlobale*> varGlobales;
	vector<Definition*> definitions;
};

