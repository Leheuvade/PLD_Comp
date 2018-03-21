/**
 * Project Untitled
 */
#pragma once

#include "Operation.h"
#include "../enums/OperateurBinaire.h"


class OperationUnaire: public Operation {
public:
	OperationUnaire();
	OperationUnaire(Expr* expr, OperateurBinaire* op);
	virtual ~OperationUnaire();
protected: 
	Expr* expr;
	OperateurBinaire* op;
};