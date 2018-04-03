/**
 * Project Untitled
 */

#pragma once
#include "VisitAST.h"

using namespace std;
class IRVisit : public VisitAST {
 public: 
 
	 IRVisit();
	virtual ~IRVisit();
	virtual VisitOutput* visit(Visitable *p) override;
	virtual VisitOutput* visit(Programme *p) override;
	virtual VisitOutput* visit(Definition *p) override;
	virtual VisitOutput* visit(Parametre *p) override;
	virtual VisitOutput* visit(ParametreDefinition *p) override;
	virtual VisitOutput* visit(OperateurAffectationBinaire p) override;
	virtual VisitOutput* visit(OperateurAffectationUnaire p) override;
	virtual VisitOutput* visit(OperateurBinaire p) override;
	virtual VisitOutput* visit(OperateurUnaire p) override;
	virtual VisitOutput* visit(Type p) override;
	virtual VisitOutput* visit(Affectation *p) override;
	virtual VisitOutput* visit(AffectationBinaire *p) override;
	virtual VisitOutput* visit(AffectationUnaire *p) override;
	virtual VisitOutput* visit(Char *p) override;
	virtual VisitOutput* visit(Expr *p) override;
	virtual VisitOutput* visit(ExprAppel *p) override;
	virtual VisitOutput* visit(Name *p) override;
	virtual VisitOutput* visit(NameTab *p) override;
	virtual VisitOutput* visit(Operation *p) override;
	virtual VisitOutput* visit(OperationBinaire *p) override;
	virtual VisitOutput* visit(OperationUnaire *p) override;
	virtual VisitOutput* visit(ParametreAppel *p) override;
	virtual VisitOutput* visit(Val *p) override;
	virtual VisitOutput* visit(Declaration *p) override;
	virtual VisitOutput* visit(DeclarationTab *p) override;
	virtual VisitOutput* visit(InitDecl *p) override;
	virtual VisitOutput* visit(Initialisation *p) override;
	virtual VisitOutput* visit(InitialisationTab *p) override;
	virtual VisitOutput* visit(InitialisationVal *p) override;
	virtual VisitOutput* visit(InstructionDeclaration *p) override;
	virtual VisitOutput* visit(InstructionInit *p) override;
	virtual VisitOutput* visit(Symbole *p) override;
	virtual VisitOutput* visit(VarGlobale *p) override;
	virtual VisitOutput* visit(VarGlobaleDeclaration *p) override;
	virtual VisitOutput* visit(VarGlobaleInitialisation *p) override;
	virtual VisitOutput* visit(InstructionBreak *p) override;
	virtual VisitOutput* visit(InstructionControle *p) override;
	virtual VisitOutput* visit(InstructionExpr *p) override;
	virtual VisitOutput* visit(InstructionReturn *p) override;
	virtual VisitOutput* visit(InstructionStruct *p) override;
	virtual VisitOutput* visit(ElseBloc *p) override;
	virtual VisitOutput* visit(StructureControle *p) override;
	virtual VisitOutput* visit(StructureIf *p) override;
	virtual VisitOutput* visit(StructureWhile *p) override;
	virtual VisitOutput* visit(Bloc *p) override;
	virtual VisitOutput* visit(BlocStruct *p) override;
	virtual VisitOutput* visit(LeftValue *p) override;






};




