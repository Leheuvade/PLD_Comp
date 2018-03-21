/**
 * Project Untitled
 */


#pragma once

class Bloc;
class Expr;

class StructureControle {
	public:
		StructureControle();
		StructureControle(Expr* condition, Bloc* bloc);
		virtual ~StructureControle();

	protected:
		Expr* condition;
		Bloc* bloc;
};
