/**
 * Project Untitled
 */


#include "StructureIf.h"
#include "ElseBloc.h"

StructureIf::StructureIf()
: StructureControle()
{
  this->elseBloc = nullptr;
}

StructureIf::StructureIf(Expr* condition, Bloc* bloc, ElseBloc* elseBloc)
: StructureControle(condition, bloc)
{
  this->elseBloc = elseBloc;
}

StructureIf::~StructureIf()
{
  delete elseBloc;
}
