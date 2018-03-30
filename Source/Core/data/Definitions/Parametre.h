/**
 * Project Untitled
 */

#pragma once
#include "../enums/Type.h"
#include "../Expressions/Name.h"

class Parametre {
friend class DebugVisit; 
 public:
	Parametre(Type type, Name *name, bool hasBrackets);
	~Parametre();

protected:
	Type type;
	Name *name;
	bool hasBrackets;
};

