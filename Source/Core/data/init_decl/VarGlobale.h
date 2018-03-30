/**
 * Project Untitled
 */

#pragma once
#include "Symbole.h"

class VarGlobale: public Symbole {
  friend class DebugVisit; 
 public:
    VarGlobale();
    virtual ~VarGlobale();
};
