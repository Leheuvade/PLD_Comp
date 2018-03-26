/**
 * Project Untitled
 */


#include "ElseBloc.h"
#include "../BlocStruct.h"

ElseBloc::ElseBloc()
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
