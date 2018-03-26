/**
 * Project Untitled
 */


#include "OperationUnaire.h"

/**
 * OperationUnaire implementation
 */
OperationUnaire::OperationUnaire(){

}
OperationUnaire::OperationUnaire(Expr* expr, OperateurUnaire* op){
	this->expr = expr;
	this->op = op;
}
OperationUnaire::~OperationUnaire(){
	delete expr;
	delete op;
}