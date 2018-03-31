/**
 * Project Untitled
 */


#include "DeclarationTab.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* DeclarationTab::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}DeclarationTab::DeclarationTab(){

  size = 0;

}

DeclarationTab::DeclarationTab(Type type, Name *name, bool isConst,Val *size)
	:Declaration(type,name,isConst){

  this->size = size;

}

DeclarationTab::~DeclarationTab(){
	delete size;

}
