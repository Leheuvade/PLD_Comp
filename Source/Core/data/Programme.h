/**
 * Project Untitled
 */


#pragma once

#include "init_decl/VarGlobale.h"
#include "Definitions/Definition.h"
using namespace std;
class Programme {
public: 
	Programme();
	Programme(vector<VarGlobale*> &varGlobales, vector<Definition*> &definitions);
	virtual ~Programme();
protected:
	vector<VarGlobale*> varGlobales;
	vector<Definition*> definitions;
};

