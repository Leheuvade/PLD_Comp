/**
 * Project Untitled
 */


#pragma once
#include "../../visitor/Visitable.h"

class BlocStruct;
class Expr;

class StructureControle : public Visitable {
	friend class DebugVisit;
friend class IRVisit;
friend class MappingNameVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
		StructureControle();
		StructureControle(Expr* condition, BlocStruct* bloc);
		virtual ~StructureControle();

	protected:
		Expr* condition;
		BlocStruct* bloc;
};
