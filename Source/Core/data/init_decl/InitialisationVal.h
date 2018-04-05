/**
 * Project Untitled
 */


#pragma once

#include "Initialisation.h"

class Val;

class InitialisationVal : public Initialisation {


    friend class DebugVisit;

    friend class IRVisit;
friend class MappingNameVisit;

    friend class MappingNameVisit;

public:
    virtual VisitOutput *accept(VisitAST *visitor) override;

    InitialisationVal();

    InitialisationVal(Type type, Name *name, bool isConst, Expr *value);

    virtual ~InitialisationVal();

protected:

    Expr *value;
};