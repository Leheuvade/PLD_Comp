/**
 * Project Untitled
 */

#pragma once
#include "../data/init_decl/Symbole.h"
#include "IRInstr.h"
#include <string>
using namespace std;
class NoeudIR {
public:
	NoeudIR();
	virtual ~NoeudIR();
	void compute();
	void add(NoeudIR* next);
protected:
	NoeudIR * next;
	IRInstr * instr;


};