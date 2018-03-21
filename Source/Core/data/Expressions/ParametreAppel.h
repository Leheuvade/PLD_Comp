/**
 * Project Untitled
 */


#pragma once

class ParametreAppel {
public:
	ParametreAppel();
	ParametreAppel(Vector<Expr*> parameters);
	virtual ~ParametreAppel();
protected: 
	Vector<Expr*> parameters;
};