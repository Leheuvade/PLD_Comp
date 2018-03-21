/**
 * Project Untitled
 */


#ifndef _PARAMETREAPPEL_H
#define _PARAMETREAPPEL_H

class ParametreAppel {
public:
	ParametreAppel();
	ParametreAppel(Vector<Expr*> parameters);
	virtual ~ParametreAppel();
protected: 
	Vector<Expr*> parameters;
};

#endif //_PARAMETREAPPEL_H