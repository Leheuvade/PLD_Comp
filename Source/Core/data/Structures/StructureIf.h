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
		StructureIf(Expr* condition, Bloc* bloc);
		virtual ~StructureIf();
	private:
		ElseBloc* elseBloc;
};
