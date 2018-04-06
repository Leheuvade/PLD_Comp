/**
 * Project Untitled
 */

#pragma once
#include "../compute/MapperSymbol.h"
#include "../data/Definitions/Definition.h"
#include "../data/Definitions/Parametre.h"
#include "../data/Definitions/ParametreDefinition.h"
#include "../data/Bloc.h"
#include "../data/BlocStruct.h"
#include "../data/Expressions/Affectation.h"
#include "../data/Expressions/AffectationBinaire.h"
#include "../data/Expressions/AffectationUnaire.h"
#include "../data/Expressions/Char.h"
#include "../data/Expressions/Expr.h"
#include "../data/Expressions/ExprAppel.h"
#include "../data/Expressions/Name.h"
#include "../data/Expressions/NameTab.h"
#include "../data/Expressions/Operation.h"
#include "../data/Expressions/OperationBinaire.h"
#include "../data/Expressions/OperationUnaire.h"
#include "../data/Expressions/ParametreAppel.h"
#include "../data/Expressions/Val.h"
#include "../data/init_decl/Declaration.h"
#include "../data/init_decl/DeclarationTab.h"
#include "../data/init_decl/InitDecl.h"
#include "../data/init_decl/Initialisation.h"
#include "../data/init_decl/InitialisationTab.h"
#include "../data/init_decl/Symbole.h"
#include "../data/Instructions/InstructionBreak.h"
#include "../data/Instructions/InstructionControle.h"
#include "../data/Instructions/InstructionExpr.h"
#include "../data/Instructions/InstructionReturn.h"
#include "../data/Instructions/InstructionStruct.h"
#include "../data/LeftValue.h"
#include "../data/Programme.h"
#include "../data/Structures/ElseBloc.h"
#include "../data/Structures/StructureControle.h"
#include "../data/Structures/StructureIf.h"
#include "../data/Structures/StructureWhile.h"
#include "../data/init_decl/Symbole.h"
#include "VisitOutput.h"
#include <string>
#include "../data/init_decl/InitialisationVal.h"

class Visitable;
using namespace std;
class VisitAST {
 public: 
 
	
	 virtual VisitOutput* visit(Visitable *p) = 0;

	virtual VisitOutput* visit(Programme *p) = 0;
	virtual VisitOutput* visit(Definition *p) = 0;
	virtual VisitOutput* visit(Parametre *p) = 0;
	virtual VisitOutput* visit(ParametreDefinition *p) = 0;
	virtual VisitOutput* visit(Affectation *p) = 0;
	virtual VisitOutput* visit(AffectationBinaire *p) = 0;
	virtual VisitOutput* visit(AffectationUnaire *p) = 0;
	virtual VisitOutput* visit(Char *p) = 0;
	virtual VisitOutput* visit(Expr *p) = 0;
	virtual VisitOutput* visit(ExprAppel *p) = 0;
	virtual VisitOutput* visit(Name *p) = 0;
	virtual VisitOutput* visit(NameTab *p) = 0;
	virtual VisitOutput* visit(Operation *p) = 0;
	virtual VisitOutput* visit(OperationBinaire *p) = 0;
	virtual VisitOutput* visit(OperationUnaire *p) = 0;
	virtual VisitOutput* visit(ParametreAppel *p) = 0;
	virtual VisitOutput* visit(Val *p) = 0;
	virtual VisitOutput* visit(Declaration *p) = 0;
	virtual VisitOutput* visit(DeclarationTab *p) = 0;
	virtual VisitOutput* visit(InitDecl *p) = 0;
	virtual VisitOutput* visit(Initialisation *p) = 0;
	virtual VisitOutput* visit(InitialisationTab *p) = 0;
    virtual VisitOutput* visit(InitialisationVal *p) = 0;
	virtual VisitOutput* visit(Symbole *p) = 0;
	virtual VisitOutput* visit(InstructionBreak *p) = 0;
	virtual VisitOutput* visit(InstructionControle *p) = 0;
	virtual VisitOutput* visit(InstructionExpr *p) = 0;
	virtual VisitOutput* visit(InstructionReturn *p) = 0;
	virtual VisitOutput* visit(InstructionStruct *p) = 0;
	virtual VisitOutput* visit(ElseBloc *p) = 0;
	virtual VisitOutput* visit(StructureControle *p) = 0;
	virtual VisitOutput* visit(StructureIf *p) = 0;
	virtual VisitOutput* visit(StructureWhile *p) = 0;
	virtual VisitOutput* visit(Bloc *p) = 0;
	virtual VisitOutput* visit(BlocStruct *p) = 0;
	virtual VisitOutput* visit(LeftValue *p) = 0;
	


	


};


