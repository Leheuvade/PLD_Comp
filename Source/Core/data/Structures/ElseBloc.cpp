/**
 * Project Untitled
 */


#include "ElseBloc.h"
#include "../BlocStruct.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* ElseBloc::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}ElseBloc::ElseBloc()
{
  this->bloc = nullptr;
}

ElseBloc::ElseBloc(BlocStruct* bloc)
{
  this->bloc = bloc;
}

ElseBloc::~ElseBloc()
{
  delete bloc;
}
