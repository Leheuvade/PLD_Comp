/**
 * Project Untitled
 */


#include "StructureWhile.h"
#include "../Bloc.h"
#include "../Expressions/Expr.h"

StructureWhile::StructureWhile()
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
