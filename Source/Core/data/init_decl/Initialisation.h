/**
 * Project Untitled
 */


#ifndef _INITIALISATION_H
#define _INITIALISATION_H

class Initialisation {

public:
	Initialisation();
	Initialisation(Type type,Name name,bool isConst);
	~Initialisation();

protected:
	Type type;
	Name name;
	bool isConst;
};

#endif //_INITIALISATION_H
