/**
 * Project Untitled
 */


#pragma once

#include "StructureControle.h"

class StructureWhile: public StructureControle {
  friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
    StructureWhile();
    StructureWhile(Expr* condition, BlocStruct* bloc);
    virtual ~StructureWhile();
};
