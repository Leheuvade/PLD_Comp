/**
 * Project Untitled
 */


#pragma once

class ElseBloc {
  public:
    ElseBloc();
    ElseBloc(Bloc* bloc);
    virtual ~ElseBloc();

  protected:
    Bloc* bloc;
};
