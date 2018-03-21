/**
 * Project Untitled
 */


#ifndef _STRUCTURECONTROLE_H
#define _STRUCTURECONTROLE_H

class StructureControle {
	public:
		StructureControle();
		StructureControle(Expr* condition, Bloc* bloc);
		virtual ~StructureControle();

	protected:
		Expr* condition;
		Bloc* bloc;
};

#endif //_STRUCTURECONTROLE_H
