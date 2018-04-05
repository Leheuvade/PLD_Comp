/**
 * Project Untitled
 */


#pragma once

#include "../../visitor/Visitable.h"
#include "../enums/Type.h"


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

