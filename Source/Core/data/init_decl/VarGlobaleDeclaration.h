/**
 * Project Untitled
 */


#pragma once

#include "VarGlobale.h"
#include "Declaration.h"


class VarGlobaleDeclaration: public VarGlobale {
	friend class MapperSymbol;
	friend class DebugVisit;
	friend class MappingNameVisit;
 public: 
 virtual VisitOutput* accept(VisitAST* visitor)override;
		VarGlobaleDeclaration();
		VarGlobaleDeclaration(Declaration *declaration);
		virtual ~VarGlobaleDeclaration();
	protected:
		Declaration *declaration;
};
