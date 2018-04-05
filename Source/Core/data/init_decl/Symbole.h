/**
 * Project Untitled
 */


#pragma once

#include "../enums/Type.h"
#include "../../visitor/Visitable.h"


class Symbole : public Visitable {

    friend class DebugVisit;

    friend class IRVisit;

public:
    virtual VisitOutput *accept(VisitAST *visitor) override;

    Symbole();

    Symbole(Type type);

    virtual ~Symbole();
protected:
    Type type;
};

