/**
 * Project Untitled
 */


#include "Declaration.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* Declaration::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * Declaration implementation
 */
Declaration::Declaration(){
 }

Declaration::Declaration(Type type, Name *name, bool isConst) : InitDecl(name){

   this->type = type;
   this->isConst = isConst;

 }

Declaration::~Declaration(){
	delete name;
 }
