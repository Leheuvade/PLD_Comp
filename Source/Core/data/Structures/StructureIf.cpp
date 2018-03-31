/**
 * Project Untitled
 */


#include "StructureIf.h"
#include "ElseBloc.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* StructureIf::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}StructureIf::StructureIf()
: StructureControle()
{
  this->elseBloc = nullptr;
}

StructureIf::StructureIf(Expr* condition, BlocStruct* bloc, ElseBloc* elseBloc)
: StructureControle(condition, bloc)
{
  this->elseBloc = elseBloc;
}

StructureIf::~StructureIf()
{
  delete elseBloc;
}
