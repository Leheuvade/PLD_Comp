/**
 * Project Untitled
 */


#include "InitialisationTab.h"

/**
 * InitialisationTab implementation
 */


  InitialisationTab(){

    this.type = nullptr;
    this.name = nullptr;
    this.isConst = true;

  }


   InitialisationTab(Val  *size,ParametreAppel* valeurs){

     this.size = size;
     this.valeurs = valeurs;
   }

   ~InitialisationTab(){


   }
