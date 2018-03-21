/**
 * Project Untitled
 */


#ifndef _EXPRAPPEL_H
#define _EXPRAPPEL_H

#include "Expr.h"


class ParametreAppel;
class Name;

class ExprAppel: public Expr {
public: 
	ExprAppel();
	ExprAppel(Name* name, ParametreAppel* parameters);
	virtual ExprAppel();
protected: 
	Name* name;
	ParametreAppel* parameters;
};

#endif //_EXPRAPPEL_H