/**
 * Project Untitled
 */


#ifndef _PROGRAMME_H
#define _PROGRAMME_H
#include "init_decl/VarGlobale.h"
#include "Definitions/Definition.h"
using namespace std;
class Programme {
public: 
	vector<VarGlobale*> varGlobales;
	vector<Definition*> definitions;
};

#endif //_PROGRAMME_H