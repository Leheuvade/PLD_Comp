/**
 * Project Untitled
 */

#pragma once
#include "../data/init_decl/Symbole.h"
#include <string>

using namespace std;
class IRInstr {
public:
	IRInstr();
	virtual ~IRInstr();
	inline string debug()
	{
		return debugOut;
	}
protected:
	Symbole * operande1;
	Symbole * operande2;
	string debugOut;
};
