/**
 * Project Untitled
 */


#pragma once

#include "../enums/Type.h"
#include "../Expressions/Name.h"
#include "InitDecl.h"

class Declaration : public InitDecl {
    friend class MapperSymbol;
    friend class MappingNameVisit;
    friend class DebugVisit;
friend class IRVisit;

public:
    virtual VisitOutput *accept(VisitAST *visitor) override;

    Declaration();

    Declaration(Type type, Name *name, bool isConst);

    virtual ~Declaration();

protected:
    bool isConst;
};
