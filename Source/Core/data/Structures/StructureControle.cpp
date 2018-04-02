/**
 * Project Untitled
 */


#include "StructureControle.h"
#include "../Expressions/Expr.h"
#include "../BlocStruct.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* StructureControle::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}StructureControle::StructureControle()
{
  this->condition = nullptr;
  this->bloc = nullptr;
}

StructureControle::StructureControle(Expr* condition, BlocStruct* bloc)
{
  this->condition = condition;
  this->bloc = bloc;
}

StructureControle::~StructureControle()
{
  delete condition;
  delete bloc;
}
