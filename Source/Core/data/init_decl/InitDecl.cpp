/**
 * Project Untitled
 */


#include "InitDecl.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InitDecl::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}


InitDecl::InitDecl()
{
}


InitDecl::InitDecl(Name * name)
{
	this->name =name;
}

InitDecl::~InitDecl()
{
}

