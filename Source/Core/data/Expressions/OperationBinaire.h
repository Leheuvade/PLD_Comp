/**
 * Project Untitled
 */


#ifndef _OPERATIONBINAIRE_H
#define _OPERATIONBINAIRE_H

#include "Operation.h"
#include "../enums/OperateurUnaire.h"


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

#endif //_OPERATIONBINAIRE_H