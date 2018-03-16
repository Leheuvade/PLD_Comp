/**
 * Project Untitled
 */


#ifndef _EXPRAPPEL_H
#define _EXPRAPPEL_H

#include "Expr.h"


class ExprAppel: public Expr {
public: 
	Name name;
	ParametreAppel parameters;
};

#endif //_EXPRAPPEL_H