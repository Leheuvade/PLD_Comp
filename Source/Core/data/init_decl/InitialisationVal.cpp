/**
 * Project Untitled
 */


#include "InitialisationVal.h"
#include "../Expressions/Val.h" 
 
/**
 * Initialisation implementation
 */


InitialisationVal::InitialisationVal(){
  type = nullptr;
  name = nullptr;
  isConst = true;
}

InitialisationVal::InitialisationVal(Type * type,Name * name,bool isConst,Val * value){
   this->type = type;
   this->name = name;
   this->isConst = isConst;
   this->value=value;
}

InitialisationVal::~InitialisationVal(){

	delete type;
	delete name;
	delete value;

 }
