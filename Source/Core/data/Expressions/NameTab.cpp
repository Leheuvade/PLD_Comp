/**
 * Project Untitled
 */


#include "NameTab.h" 
#include "../../visitor/VisitAST.h"

VisitOutput* NameTab::accept(VisitAST* visitor)
{
	return visitor->visit(this);
}/**
 * NameTab implementation
 */
NameTab::NameTab()
{
	indice = 0;
}
NameTab::NameTab(string name,Expr* indice) :  Name(name) {
	this->indice = indice;
}
NameTab::~NameTab(){
	delete indice;
}