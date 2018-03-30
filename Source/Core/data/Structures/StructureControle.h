/**
 * Project Untitled
 */


#pragma once

class BlocStruct;
class Expr;

class StructureControle {
	friend class DebugVisit; 
 public:
		StructureControle();
		StructureControle(Expr* condition, BlocStruct* bloc);
		virtual ~StructureControle();

	protected:
		Expr* condition;
		BlocStruct* bloc;
};
