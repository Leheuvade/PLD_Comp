/**
 * Project Untitled
 */


#include "StructureControle.h"

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
  delete this->condition;
  delete this->bloc;
}
