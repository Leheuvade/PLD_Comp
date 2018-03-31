/**
 * Project Untitled
 */
#pragma once
 
#include "Operation.h"
#include "../enums/OperateurBinaire.h"


class OperationBinaire: public Operation {
friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 
	OperationBinaire();
	OperationBinaire(Expr* expr1, OperateurBinaire op, Expr* expr2);
	virtual ~OperationBinaire();

protected: 
	Expr* expr1;
	OperateurBinaire op;
	Expr* expr2;
};
