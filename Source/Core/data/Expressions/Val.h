/**
 * Project Untitled
 */


#ifndef _VAL_H
#define _VAL_H

#include "Expr.h"


class Val: public Expr {
public: 
	Val();
	Val(int val);
	virtual ~Val();
protected: 
	int val;
};

#endif //_VAL_H