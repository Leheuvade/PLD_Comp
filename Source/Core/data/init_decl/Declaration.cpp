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
   name = nullptr;
 }

Declaration::Declaration(Type type, Name *name, bool isConst){

   this->type = type;
   this->name = name;
   this->isConst = isConst;

 }

Declaration::~Declaration(){
	delete name;
 }
