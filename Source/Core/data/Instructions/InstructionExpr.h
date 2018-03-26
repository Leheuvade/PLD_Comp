/**
 * Project Untitled
 */

#pragma once

#include "InstructionStruct.h"

class Expr;

class InstructionExpr: public InstructionStruct {
public:

InstructionExpr(Expr* expr);
    virtual ~InstructionExpr();

protected:
	Expr* expr;

};

