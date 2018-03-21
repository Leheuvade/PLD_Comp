/**
 * Project Untitled
 */
#pragma once
 
#include "Operation.h"


class OperationBinaire: public Operation {
public: 
	OperationBinaire();
	OperationBinaire(Expr* expr1, OperateurUnaire* op, Expr* expr2);
	virtual ~OperationBinaire();

protected: 
	Expr* expr1;
	OperateurUnaire* op;
	Expr* expr2;
};
