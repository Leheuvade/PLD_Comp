/**
 * Project Untitled
 */


#pragma once
#include "Parametre.h"
#include <vector>
#include "../../visitor/Visitable.h"
using namespace std;
class ParametreDefinition : public Visitable{

	friend class DebugVisit;
friend class IRVisit;
	friend class MappingNameVisit;
	friend class MapperSymbol;

 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;

ParametreDefinition();
ParametreDefinition(vector<Parametre*> parameters);
~ParametreDefinition();

protected:
	vector<Parametre*> parameters;
};
