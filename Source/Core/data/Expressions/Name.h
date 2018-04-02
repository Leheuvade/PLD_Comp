/**
 * Project Untitled
 */

#pragma once

#include "Expr.h"
#include "../init_decl/Symbole.h"
#include <string>

using namespace std;
class Name: public Expr {
	friend class MapperSymbol;
friend class DebugVisit;
	friend class MappingNameVisit;
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	Name();
	Name(string name);
	void setSymbol(Symbole * s);
	virtual ~Name();

protected: 
	string name;
	Symbole * symbole;
};
