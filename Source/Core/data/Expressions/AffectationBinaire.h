/**
 * Project Untitled
 */
#pragma once

#include "Affectation.h"
#include "../enums/OperateurAffectationBinaire.h"


class LeftValue;

class AffectationBinaire: public Affectation {

friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override; 
	AffectationBinaire();
	AffectationBinaire(LeftValue* leftValue, OperateurAffectationBinaire  op, Expr * expr);
	virtual ~AffectationBinaire();
protected: 
	LeftValue* leftValue;
	OperateurAffectationBinaire op;
	Expr* expr;
};
