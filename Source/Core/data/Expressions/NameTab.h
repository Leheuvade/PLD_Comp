/**
 * Project Untitled
 */

#pragma once

#include "Name.h"
#include <string>

class NameTab: public Name {
friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 
	NameTab();
	NameTab(string name,Expr* indice);
	virtual ~NameTab();
protected: 
	Expr* indice;

};