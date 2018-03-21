/**
 * Project Untitled
 */


#ifndef _VARGLOBALEDECLARATION_H
#define _VARGLOBALEDECLARATION_H

#include "VarGlobale.h"
#include "Declaration.h"


class VarGlobaleDeclaration: public VarGlobale {
public: 
	Declaration *declaration;
};

#endif //_VARGLOBALEDECLARATION_H