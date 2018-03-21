/**
 * Project Untitled
 */


#ifndef _VARGLOBALEDECLARATION_H
#define _VARGLOBALEDECLARATION_H

#include "VarGlobale.h"
#include "Declaration.h"


class VarGlobaleDeclaration: public VarGlobale {
public: 
VarGlobaleDeclaration();
VarGlobaleDeclaration(Declaration *declaration);
~VarGlobaleDeclaration();
protected:
	Declaration *declaration;
};

#endif //_VARGLOBALEDECLARATION_H