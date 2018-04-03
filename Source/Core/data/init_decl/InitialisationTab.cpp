/**
 * Project Untitled
 */


#include "InitialisationTab.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* InitialisationTab::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * InitialisationTab implementation
 */


InitialisationTab::InitialisationTab(){
  isConst = true;
}

InitialisationTab::InitialisationTab(Type type,Name* name, bool isConst, Val* size, ParametreAppel* valeurs)
: Initialisation(type, name, isConst)
{
 this->size = size;
 this->valeurs = valeurs;
}

InitialisationTab::~InitialisationTab(){
  delete size;
  delete valeurs;
}
