/**
 * Project Untitled
 */
#pragma once

#include "Operation.h"
#include "../enums/OperateurUnaire.h"


class OperationUnaire: public Operation {
friend class DebugVisit;
friend class IRVisit;
	friend class MappingNameVisit;
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
	OperationUnaire();
	OperationUnaire(Expr* expr, OperateurUnaire op);
	virtual ~OperationUnaire();
protected: 
	Expr* expr;
	OperateurUnaire op;
};