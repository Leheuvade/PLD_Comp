/**
 * Project Untitled
 */


#ifndef _STRUCTUREIF_H
#define _STRUCTUREIF_H

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

#endif //_STRUCTUREIF_H
