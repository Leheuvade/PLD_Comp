/**
 * Project Untitled
 */


#include "Declaration.h"

/**
 * Declaration implementation
 */
 Declaration(){

   this.type = nullptr;
   this.name = nullptr;
   this.isConst = true;

 }

 Declaration(Type type,Name name,bool isConst){

   this.type = type;
   this.name = name;
   this.isConst = isConst;

 }

 ~DeclarationTab(){


 }
