/**
 * Project Untitled
 */


#pragma once

#include <vector>
#include <Source/Core/data/init_decl/InitDecl.h>

using namespace std;

class Definition;

using namespace std;
class Programme : public Visitable {
	friend class MapperSymbol;
	friend class VisitAST;
	friend class DebugVisit;
friend class IRVisit;
	friend class MappingNameVisit;
public:
	Programme();
	Programme(vector<InitDecl*> &varGlobales, vector<Definition*> &definitions);
	virtual ~Programme();
	virtual VisitOutput* accept(VisitAST* visitor)override;

protected:
	vector<InitDecl*> varGlobales;
	vector<Definition*> definitions;
};

