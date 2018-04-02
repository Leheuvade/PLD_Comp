/**
 * Project Untitled
 */



#pragma once
#include "Expr.h"
#include <vector>

using namespace std;
class ParametreAppel : public Visitable {
friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	ParametreAppel();
	ParametreAppel(vector<Expr*> &parameters);
	virtual ~ParametreAppel();

protected:
	vector<Expr*> parameters;
};


