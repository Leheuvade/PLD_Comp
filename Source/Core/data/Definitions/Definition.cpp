/**
 * Project Untitled
 */


#include "Definition.h"
#include "Type.h"
#include "Name.h"
#include "ParametreDefinition.h"
#include "Bloc.h"
#include "../enums/Type.h"
#include "../Bloc.h"
#include "../Expressions/Name.h"


Definition::Definition(Type t, Name *n, ParametreDefinition p, Bloc* b)
{
    type=t;
    name=n;
    params=p;
    bloc=b;
}

Definition::~Definition()
{
}
