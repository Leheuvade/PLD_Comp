/**
 * Project Untitled
 */


#pragma once

#include "StructureControle.h"


class ElseBloc;

class StructureIf: public StructureControle {
	public:
		StructureIf();
		StructureIf(Expr* condition, BlocStruct* bloc, ElseBloc* elseBloc);
		virtual ~StructureIf();
	private:
		ElseBloc* elseBloc;
};
