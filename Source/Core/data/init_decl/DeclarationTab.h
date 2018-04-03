/**
 * Project Untitled
 */

#pragma once
#include "Declaration.h"
#include "../Expressions/Val.h"


class DeclarationTab: public Declaration {



friend class DebugVisit;
friend class IRVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	DeclarationTab();
	DeclarationTab(Type type, Name *name, bool isConst,Val *size);
	virtual ~DeclarationTab();

protected:
	Val *size;

};

