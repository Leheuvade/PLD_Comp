/**
 * Project Untitled
 */


#ifndef _PARAMETREDEFINITION_H
#define _PARAMETREDEFINITION_H
#include "Parametre.h"
#include <vector>

class ParametreDefinition {

public:
ParametreDefinition::ParametreDefinition(std::vector<Parametre> parameters);
~ParametreDefinition();

protected:
	std::vector<Parametre> parameters;
};

#endif //_PARAMETREDEFINITION_H