/**
 * Project Untitled
 */

#pragma once
#include "Symbole.h"

class VarGlobale: public Symbole {
  friend class DebugVisit; 
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
    VarGlobale();
    virtual ~VarGlobale();
};
