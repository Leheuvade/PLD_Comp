/**
 * Project Untitled
 */


#pragma once

#include <Source/Core/data/Expressions/Name.h>
#include "Symbole.h"


class InitDecl : public Symbole {

    friend class DebugVisit;
    friend class MapperSymbol;
    friend class MappingNameVisit;

public:
    virtual VisitOutput *accept(VisitAST *visitor) override;

    InitDecl();

    InitDecl(Name * name);

    virtual ~InitDecl();

protected:
    Name * name;
};

