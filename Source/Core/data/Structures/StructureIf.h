/**
 * Project Untitled
 */


#pragma once

#include "StructureControle.h"


class ElseBloc;

class StructureIf: public StructureControle {
	public:
		StructureIf();
		StructureIf(Expr* condition, Bloc* bloc, ElseBloc* elseBloc);
		~StructureIf();
	private:
		ElseBloc* elseBloc;
};
