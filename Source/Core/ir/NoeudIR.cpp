/**
 * Project Untitled
 */

#include "NoeudIR.h"
#include <iostream>

NoeudIR::NoeudIR()
{
}

NoeudIR::NoeudIR(IRInstr* instr)
{
	this->instr = instr;
}

NoeudIR::~NoeudIR()
{
	delete instr;
	delete next;
}

void NoeudIR::compute()
{
	cout << "noeud: " <<instr<< endl;
	if(next)
	{
		next->compute();
	}
}

void NoeudIR::add(NoeudIR* next)
{
	this->next = next;
}
