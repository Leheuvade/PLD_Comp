/**
 * Project Untitled
 */

#pragma once
#include "../data/init_decl/Symbole.h"


class IRInstr {
public:
	IRInstr();
	virtual ~IRInstr();
protected:
	Symbole * operande1;
	Symbole * operande2;

};