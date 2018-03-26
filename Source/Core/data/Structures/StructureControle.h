/**
 * Project Untitled
 */


#pragma once

class BlocStruct;
class Expr;

class StructureControle {
	public:
		StructureControle();
		StructureControle(Expr* condition, BlocStruct* bloc);
		virtual ~StructureControle();

	protected:
		Expr* condition;
		BlocStruct* bloc;
};
