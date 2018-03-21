/**
 * Project Untitled
 */


#ifndef _STRUCTUREWHILE_H
#define _STRUCTUREWHILE_H

#include "StructureControle.h"


class StructureWhile: public StructureControle {
  public:
    StructureWhile();
    StructureWhile(Expr* condition, Bloc* bloc);
    ~StructureWhile();
};

#endif //_STRUCTUREWHILE_H
