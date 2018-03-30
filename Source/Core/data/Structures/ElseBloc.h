/**
 * Project Untitled
 */


#pragma once

class BlocStruct;

class ElseBloc {
  friend class DebugVisit; 
 public:
    ElseBloc();
    ElseBloc(BlocStruct* bloc);
    virtual ~ElseBloc();

  protected:
	  BlocStruct * bloc;
};
