/**
 * Project Untitled
 */


#include "ElseBloc.h"
#include "../Bloc.h"

ElseBloc::ElseBloc()
{
  this->bloc = nullptr;
}

ElseBloc::ElseBloc(Bloc* bloc)
{
  this->bloc = bloc;
}

ElseBloc::~ElseBloc()
{
  delete this->bloc;
}
