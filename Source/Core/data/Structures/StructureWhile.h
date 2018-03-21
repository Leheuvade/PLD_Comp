/**
 * Project Untitled
 */


#pragma once

#include "StructureControle.h"

class StructureWhile: public StructureControle {
  public:
    StructureWhile();
    StructureWhile(Expr* condition, Bloc* bloc);
    ~StructureWhile();
};
