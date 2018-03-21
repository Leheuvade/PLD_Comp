/**
 * Project Untitled
 */


#ifndef _DECLARATION_H
#define _DECLARATION_H

class Declaration {
public:
	Declaration();
	Declaration(Type type,Name name,bool isConst);
	~Declaration();

protected:
	Type type;
	Name name;
	bool isConst;
};



#endif //_DECLARATION_H
