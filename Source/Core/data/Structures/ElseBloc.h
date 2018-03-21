/**
 * Project Untitled
 */


#ifndef _ELSEBLOC_H
#define _ELSEBLOC_H

class ElseBloc {
  public:
    ElseBloc();
    ElseBloc(Bloc* bloc);
    virtual ~ElseBloc();

  protected:
    Bloc* bloc;
};

#endif //_ELSEBLOC_H
