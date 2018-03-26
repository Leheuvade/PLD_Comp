/**
 * Project Untitled
 */


#pragma once

#include "init_decl/VarGlobale.h"
#include <vector> 
using namespace std;

class Definition;

using namespace std;
class Programme {
	friend class MapperSymbol;
public: 
	Programme();
	Programme(vector<VarGlobale*> &varGlobales, vector<Definition*> &definitions);
	virtual ~Programme();
protected:
	vector<VarGlobale*> varGlobales;
	vector<Definition*> definitions;
};

