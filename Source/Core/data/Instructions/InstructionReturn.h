/**
 * Project Untitled
 */

#pragma once

#include "InstructionStruct.h"


class Expr;

class InstructionReturn: public InstructionStruct {
public:

InstructionReturn(Expr *expr);
   virtual  ~InstructionReturn();

protected:
	Expr *expr;

};
