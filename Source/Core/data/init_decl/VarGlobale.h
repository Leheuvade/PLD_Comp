/**
 * Project Untitled
 */

#pragma once
#include "Symbole.h"


//Var Globale ne sert à rien -> on pourrait la supprimer et avoir un vecteur InitDecl dans le programme
class VarGlobale: public Symbole {
  friend class DebugVisit;
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
    VarGlobale();
    virtual ~VarGlobale();
};
