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
    this->appelFnct = false;
}

void MapperSymbol::appelFnctTrue() {
    this->appelFnct = true;
}

MapperSymbol::~MapperSymbol() {


}

Symbole *MapperSymbol::findDefinition(string name, Programme *p) {
    //Ce peut être le cas que si definition ou exprAppel est appelé
    for (int i = 0; i < p->definitions.size(); i++) {
        if (p->definitions[i]->name->name == name) {
        return p->definitions[i];
        }
    }
    this->appelFnct = false;

    cerr << "la fonction " << name << " n'a pas été définie" << endl;

    return nullptr;
}

Symbole *MapperSymbol::findSymbol(string name, Programme *p, Definition *b) {

    if(appelFnct)
    {
        return findDefinition(name, p);
    }
    else
    {
        return findDeclaration(name, p, b);
    }
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