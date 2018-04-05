/**
 * Project Untitled
 */


#pragma once

#include <vector> 
#include "../data/init_decl/Symbole.h"
#include "../../grammaire/grammaireParser.h"
#include "../data/Bloc.h"
#include "../data/Programme.h"
#include <map>

class Name;
using namespace std;
class MapperSymbol {
friend class DebugVisit;
friend class IRVisit; 
 public: 
  
	MapperSymbol();
	virtual ~MapperSymbol();
	Symbole * findDefinition(string name, Programme * p);
	Symbole * findSymbol(string name, Programme * p, Definition * b);
	Symbole * findDeclaration(string name, Programme *p, Definition *b);
};
