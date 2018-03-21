/**
 * Project Untitled
 */


#ifndef _OPERATIONBINAIRE_H
#define _OPERATIONBINAIRE_H

#include "Operation.h"


class OperationBinaire: public Operation {
public: 
	Expr expr1;
	OperateurUnaire op;
	Expr expr2;
};

#endif //_OPERATIONBINAIRE_H