/**
 * Project Untitled
 */


#pragma once

#include "StructureControle.h"


class ElseBloc;

class StructureIf: public StructureControle {
	friend class DebugVisit;
friend class IRVisit;
	friend class MappingNameVisit;
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
		StructureIf();
		StructureIf(Expr* condition, BlocStruct* bloc, ElseBloc* elseBloc);
		virtual ~StructureIf();
	private:
		ElseBloc* elseBloc;
};
