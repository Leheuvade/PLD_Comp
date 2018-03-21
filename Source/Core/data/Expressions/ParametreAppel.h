/**
 * Project Untitled
 */


#ifndef _PARAMETREAPPEL_H
#define _PARAMETREAPPEL_H
#include "Expr.h"
#include <vector>

class ParametreAppel {
public:
	ParametreAppel();
	ParametreAppel(std::vector<Expr*> parameters);
	virtual ~ParametreAppel();
protected:
	std::vector<Expr*> parameters;
};

#endif //_PARAMETREAPPEL_H