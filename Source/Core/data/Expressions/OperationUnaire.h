/**
 * Project Untitled
 */


#ifndef _OPERATIONUNAIRE_H
#define _OPERATIONUNAIRE_H

#include "Operation.h"


class OperationUnaire: public Operation {
public: 
	Expr expr;
	OperateurBinaire op;
};

#endif //_OPERATIONUNAIRE_H