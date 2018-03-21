/**
 * Project Untitled
 */


#include "InitialisationTab.h"

/**
 * InitialisationTab implementation
 */


InitialisationTab::InitialisationTab(){
  type = nullptr;
  name = nullptr;
  isConst = true;
}

InitialisationTab::InitialisationTab(Type* type,Name* name, bool isConst, Val* size, ParametreAppel* valeurs)
: Initialisation(type, name, isConst)
{
 this->size = size;
 this->valeurs = valeurs;
}

InitialisationTab::~InitialisationTab(){
  delete size;
  delete valeurs;
}
