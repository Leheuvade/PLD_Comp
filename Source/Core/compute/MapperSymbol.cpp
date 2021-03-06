/**
 * Project Untitled
 */


#include "MapperSymbol.h"
#include "../data/Programme.h"
#include "../data/Bloc.h"
#include "../data/Definitions/Definition.h"

/**
 * MapperSymbol implementation
 */
MapperSymbol::MapperSymbol() {
}

MapperSymbol::~MapperSymbol() {


}

Symbole *MapperSymbol::findDefinition(string name, Programme *p) {
    //Ce peut être le cas que si definition ou exprAppel est appelé
    if(name == "putchar")
    {
        return nullptr;
    }

    for (int i = 0; i < p->definitions.size(); i++) {
        if (p->definitions[i]->name->name == name) {
        return p->definitions[i];
        }
    }

    cerr << "la fonction " << name << " n'a pas été définie" << endl;

    return nullptr;
}

Symbole * MapperSymbol::findDeclaration(string name, Programme *p, Definition *b) {
    if(b!= nullptr)
    {
        for (int i = 0; i < b->bloc->initDecl.size(); i++) {
            if (b->bloc->initDecl[i]->name->name == name) {
                return b->bloc->initDecl[i];
            }
        }

        for (int i = 0; i < b->params->parameters.size(); i++) {
            if (b->params->parameters[i]->name->name == name) {
                return b->params->parameters[i];
            }
        }
    }

    for (int i = 0; i < p->varGlobales.size(); i++) {
        if (p->varGlobales[i]->name->name == name) {
            return p->varGlobales[i];
        }
    }

    cerr << "la variable " << name << " est utilisée sans avoir été déclarée" << endl;
    return nullptr;
}