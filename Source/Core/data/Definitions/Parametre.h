/**
 * Project Untitled
 */

#pragma once
#include "../enums/Type.h"
#include "../Expressions/Name.h"
#include "../init_decl/Symbole.h"

class Parametre : public Symbole{
friend class DebugVisit; 
 public: 
 	virtual VisitOutput* accept(VisitAST* visitor)override;
	Parametre(Type type, Name *name, bool hasBrackets);
	~Parametre();

protected:
	Type type;
	Name *name;
	bool hasBrackets;
};

