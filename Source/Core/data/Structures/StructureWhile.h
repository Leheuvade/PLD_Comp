/**
 * Project Untitled
 */


#pragma once

#include "StructureControle.h"

class StructureWhile: public StructureControle {
  friend class DebugVisit;
friend class IRVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
    StructureWhile();
    StructureWhile(Expr* condition, BlocStruct* bloc);
    virtual ~StructureWhile();
};
