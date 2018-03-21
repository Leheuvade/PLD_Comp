/**
 * Project Untitled
 */


#ifndef _NAMETAB_H
#define _NAMETAB_H

#include "Name.h"
#include <string>

class NameTab: public Name {
public: 
	NameTab(string name);
	NameTab(Expr* indice);
	virtual ~NameTab();
protected: 
	Expr* indice;
};

#endif //_NAMETAB_H