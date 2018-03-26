/**
 * Project Untitled
 */


#pragma once

class BlocStruct;

class ElseBloc {
  public:
    ElseBloc();
    ElseBloc(BlocStruct* bloc);
    virtual ~ElseBloc();

  protected:
	  BlocStruct * bloc;
};
