/**
 * Project Untitled
 */

#pragma once

#include "InstructionStruct.h"

class Expr;

class InstructionExpr: public InstructionStruct {
friend class DebugVisit; 
 public:

InstructionExpr(Expr* expr);
    virtual ~InstructionExpr();

protected:
	Expr* expr;

};

