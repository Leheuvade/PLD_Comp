/**
 * Project Untitled
 */

#pragma once
#include "../data/init_decl/Symbole.h"
#include <string>

using namespace std;
class VisitAST {
public:
	VisitAST(Programme * p);
	virtual ~VisitAST();
	void visit();
protected:
	Programme * p;
};
