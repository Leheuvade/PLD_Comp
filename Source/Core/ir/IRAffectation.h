/**
 * Project Untitled
 */

#pragma once
#include "../data/init_decl/Symbole.h"
#include "IRInstr.h"


class IRAffectation: public IRInstr {
public:
	IRAffectation(Type t,Name* name, Val* val);
	virtual ~IRAffectation();


};