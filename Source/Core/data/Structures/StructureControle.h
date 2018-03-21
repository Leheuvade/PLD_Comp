/**
 * Project Untitled
 */


#pragma once

class StructureControle {
	public:
		StructureControle();
		StructureControle(Expr* condition, Bloc* bloc);
		virtual ~StructureControle();

	protected:
		Expr* condition;
		Bloc* bloc;
};
