/**
 * Project Untitled
 */


#ifndef _PARAMETREDEFINITION_H
#define _PARAMETREDEFINITION_H
#include "Parametre.h"

class ParametreDefinition {

public:
ParametreDefinition::ParametreDefinition(Vector<Parametre*> parameters);
~ParametreDefinition();

protected:
	Vector<Parametre*> parameters;
};

#endif //_PARAMETREDEFINITION_H