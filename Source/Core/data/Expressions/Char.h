/**
 * Project Untitled
 */


#ifndef _CHAR_H
#define _CHAR_H

#include "Expr.h"


class Char: public Expr {
public: 
	Char();
	Char(char val);
	virtual ~Char();

protected: 
	char val;
};

#endif //_CHAR_H