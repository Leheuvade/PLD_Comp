/**
 * Project Untitled
 */


#pragma once

#include "StructureControle.h"


class ElseBloc;

class StructureIf: public StructureControle {
	friend class DebugVisit; 
 public:
		StructureIf();
		StructureIf(Expr* condition, BlocStruct* bloc, ElseBloc* elseBloc);
		virtual ~StructureIf();
	private:
		ElseBloc* elseBloc;
};
