/**
 * Project Untitled
 */


#include "Initialisation.h"

/**
 * Initialisation implementation
 */


 Initialisation(){

   this.type = nullptr;
   this.name = nullptr;
   this.isConst = true;

 }

 Initialisation(Type * type,Name * name,bool isConst){

   this.type = type;
   this.name = name;
   this.isConst = isConst;

 }

 ~Initialisation(){


 }
