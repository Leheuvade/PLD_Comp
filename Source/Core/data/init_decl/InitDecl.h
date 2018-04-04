/**
 * Project Untitled
 */


#pragma once

#include "Symbole.h"


class Name;

class InitDecl : public Symbole {

    friend class DebugVisit;
friend class IRVisit;
    friend class MapperSymbol;
    friend class MappingNameVisit;

public:
    virtual VisitOutput *accept(VisitAST *visitor) override;

    InitDecl();

    InitDecl(Type type, Name * name);

    virtual ~InitDecl();

protected:
    Name * name;
};

