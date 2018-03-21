/**
 * Project Untitled
 */


#include "StructureIf.h"

StructureIf::StructureIf()
: StructureControle()
{
  this->elseBloc = nullptr;
}

StructureIf::StructureIf(Expr* condition, Bloc* bloc, ElseBloc* elseBloc)
: StructureControle(Expr* condition, Bloc* bloc)
{
  this->elseBloc = elseBloc;
}

StructureIf::~StructureIf()
{

}
