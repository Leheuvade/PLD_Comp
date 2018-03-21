/**
 * Project Untitled
 */


#ifndef _NAME_H
#define _NAME_H

#include "Expr.h"
#include <string>


class Name: public Expr {
public:
	Name();
	Name(string name);
	virtual ~Name();
protected: 
	string name;
};

#endif //_NAME_H