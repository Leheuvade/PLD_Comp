/**
 * Project Untitled
 */


#include "NameTab.h"

/**
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