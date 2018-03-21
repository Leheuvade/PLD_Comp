/**
 * Project Untitled
 */


#include "Declaration.h"

/**
 * Declaration implementation
 */
Declaration::Declaration(){

   type = nullptr;
   name = nullptr;
   isConst = true;

 }

Declaration::Declaration(Type *type,Name *name,bool isConst){

   this->type = type;
   this->name = name;
   this->isConst = isConst;

 }

Declaration::~Declaration(){


 }
