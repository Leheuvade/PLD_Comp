/**
 * Project Untitled
 */


#include "StructureWhile.h"
#include "../Bloc.h"
#include "../Expressions/Expr.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* StructureWhile::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}StructureWhile::StructureWhile()
: StructureControle()
{

}

StructureWhile::StructureWhile(Expr* condition, BlocStruct* bloc)
: StructureControle(condition, bloc)
{

}

StructureWhile::~StructureWhile()
{
	
}
