/**
 * Project Untitled
 */


#pragma once

class Bloc;

class ElseBloc {
  public:
    ElseBloc();
    ElseBloc(Bloc* bloc);
    virtual ~ElseBloc();

  protected:
    Bloc* bloc;
};
