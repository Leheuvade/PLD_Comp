/**
 * Project Untitled
 */


#include "NameTab.h"

/**
 * NameTab implementation
 */
NameTab::NameTab(string name) : Name(name) {}
NameTab::NameTab(Expr* indice) :  Name(name) {
	this->indice = indice;
}
virtual NameTab::~NameTab(){

}