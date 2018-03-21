/**
 * Project Untitled
 */


#pragma once
#include "Parametre.h"
#include <vector>
using namespace std;
class ParametreDefinition {

public:

ParametreDefinition(vector<Parametre*> parameters);
~ParametreDefinition();

protected:
	vector<Parametre*> parameters;
};

