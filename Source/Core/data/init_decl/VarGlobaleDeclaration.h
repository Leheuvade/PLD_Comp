/**
 * Project Untitled
 */


#pragma once

#include "VarGlobale.h"
#include "Declaration.h"


class VarGlobaleDeclaration: public VarGlobale {
	friend class MapperSymbol;
	public:
		VarGlobaleDeclaration();
		VarGlobaleDeclaration(Declaration *declaration);
		virtual ~VarGlobaleDeclaration();
	protected:
		Declaration *declaration;
};
