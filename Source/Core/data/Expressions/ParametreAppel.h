/**
 * Project Untitled
 */



#pragma once
#include "Expr.h"
#include <vector>

using namespace std;
class ParametreAppel {
public:
	ParametreAppel();
	ParametreAppel(vector<Expr*> parameters);
	virtual ~ParametreAppel();

protected:
	vector<Expr*> parameters;
};


