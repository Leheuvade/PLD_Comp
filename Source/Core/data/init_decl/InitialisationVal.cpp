/**
 * Project Untitled
 */


#include "InitialisationVal.h"
#include "../Expressions/Val.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InitialisationVal::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * Initialisation implementation
 */


InitialisationVal::InitialisationVal() {
}

InitialisationVal::InitialisationVal(Type type,Name * name,bool isConst,Val * value):Initialisation(type,name,isConst){
   this->value=value;
}

InitialisationVal::~InitialisationVal(){
	
 }
