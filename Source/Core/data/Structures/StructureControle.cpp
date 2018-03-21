/**
 * Project Untitled
 */


#include "StructureControle.h"
#include "../Expressions/Expr.h"
#include "../Bloc.h"

StructureControle::StructureControle()
{
  this->condition = nullptr;
  this->bloc = nullptr;
}

StructureControle::StructureControle(Expr* condition, Bloc* bloc)
{
  this->condition = condition;
  this->bloc = bloc;
}

StructureControle::~StructureControle()
{
  delete condition;
  delete bloc;
}
