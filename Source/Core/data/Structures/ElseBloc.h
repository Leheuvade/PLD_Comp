/**
 * Project Untitled
 */


#pragma once
#include "../../visitor/Visitable.h"

class BlocStruct;

class ElseBloc : public Visitable {
  friend class DebugVisit;
friend class IRVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
    ElseBloc();
    ElseBloc(BlocStruct* bloc);
    virtual ~ElseBloc();

  protected:
	  BlocStruct * bloc;
};
