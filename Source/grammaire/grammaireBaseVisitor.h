
// Generated from grammaire.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "grammaireVisitor.h"
#include "../Core/data/Definitions/Definition.h"
#include "../Core/data/Definitions/Parametre.h"
#include "../Core/data/Definitions/ParametreDefinition.h"
#include "../Core/data/Bloc.h"
#include "../Core/data/BlocStruct.h"
#include "../Core/data/Expressions/Affectation.h"
#include "../Core/data/Expressions/AffectationBinaire.h"
#include "../Core/data/Expressions/AffectationUnaire.h"
#include "../Core/data/Expressions/Char.h"
#include "../Core/data/Expressions/Expr.h"
#include "../Core/data/Expressions/ExprAppel.h"
#include "../Core/data/Expressions/Name.h"
#include "../Core/data/Expressions/NameTab.h"
#include "../Core/data/Expressions/Operation.h"
#include "../Core/data/Expressions/OperationBinaire.h"
#include "../Core/data/Expressions/OperationUnaire.h"
#include "../Core/data/Expressions/ParametreAppel.h"
#include "../Core/data/Expressions/Val.h"
#include "../Core/data/init_decl/Declaration.h"
#include "../Core/data/init_decl/DeclarationTab.h"
#include "../Core/data/init_decl/InitDecl.h"
#include "../Core/data/init_decl/Initialisation.h"
#include "../Core/data/init_decl/InitialisationTab.h"
#include "../Core/data/init_decl/InitialisationVal.h"
#include "../Core/data/init_decl/InstructionDeclaration.h"
#include "../Core/data/init_decl/InstructionInit.h"
#include "../Core/data/init_decl/Symbole.h"
#include "../Core/data/init_decl/VarGlobale.h"
#include "../Core/data/init_decl/VarGlobaleDeclaration.h"
#include "../Core/data/init_decl/VarGlobaleInitialisation.h"
#include "../Core/data/Instructions/InstructionBreak.h"
#include "../Core/data/Instructions/InstructionControle.h"
#include "../Core/data/Instructions/InstructionExpr.h"
#include "../Core/data/Instructions/InstructionReturn.h"
#include "../Core/data/Instructions/InstructionStruct.h"
#include "../Core/data/LeftValue.h"
#include "../Core/data/Programme.h"
#include "../Core/data/Structures/ElseBloc.h"
#include "../Core/data/Structures/StructureControle.h"
#include "../Core/data/Structures/StructureIf.h"
#include "../Core/data/Structures/StructureWhile.h"
#include <string>
#include <vector>
using namespace std;



/**
 * This class provides an empty implementation of grammaireVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  grammaireBaseVisitor : public grammaireVisitor {
public:

  virtual antlrcpp::Any visitProgramme(grammaireParser::ProgrammeContext *ctx) override {
    //ctxCourant = ctx;
    //return antlrcpp::Any firstVisit = visitChildren(ctx);
    cout<<"Programme"<<endl;
    return visitChildren(ctx);
  }
  virtual antlrcpp::Any visitDecl(grammaireParser::DeclContext *ctx) override {
    cout<<"Decl"<<endl;
    return (InitDecl *)visit(ctx->declaration());
  }

  virtual antlrcpp::Any visitInit(grammaireParser::InitContext *ctx) override {
    cout<<"Init"<<endl;
    return (InitDecl *)visit(ctx->initialisation());
  }

  virtual antlrcpp::Any visitInstExpr(grammaireParser::InstExprContext *ctx) override {
    cout<<"InstExpr"<<endl;
    return (InstructionStruct *)visit(ctx->expr());
  }

  virtual antlrcpp::Any visitInstbloc(grammaireParser::InstblocContext *ctx) override {
    cout<<"Instblo"<<endl;
    return (InstructionStruct *)visit(ctx->blocStruct());
  }

  virtual antlrcpp::Any visitInstStrucControl(grammaireParser::InstStrucControlContext *ctx) override {
    cout<<"InstStrucControl"<<endl;
    return (InstructionStruct *)visit(ctx->structureControle());
  }

  virtual antlrcpp::Any visitInstBreak(grammaireParser::InstBreakContext *ctx) override {
    cout<<"InstBreak"<<endl;
    return 0;
  }

  virtual antlrcpp::Any visitInstReturn(grammaireParser::InstReturnContext *ctx) override {
    cout<<"InstReturn"<<endl;
    return (InstructionStruct *)visit(ctx->expr());
  }

  virtual antlrcpp::Any visitVarDecl(grammaireParser::VarDeclContext *ctx) override {
    cout<<"VarDecl"<<endl;
    return (VarGlobale*)visit(ctx->declaration());
  }

  virtual antlrcpp::Any visitVarInit(grammaireParser::VarInitContext *ctx) override {
    cout<<"VarInit"<<endl;
    return (VarGlobale*)visit(ctx->initialisation());
  }

  virtual antlrcpp::Any visitDeclConst(grammaireParser::DeclConstContext *ctx) override {
    cout<<"DeclConst"<<endl;
    return (Declaration*)
      new Declaration(
      (Type)visit(ctx->type()),
        (Name*) new Name(ctx->NAME()->getText()),
        true
      );
  }

  virtual antlrcpp::Any visitDeclVar(grammaireParser::DeclVarContext *ctx) override {
    cout<<"DeclVar"<<endl;
    return (Declaration*)
      new Declaration(
      (Type)visit(ctx->type()),
        (Name*) new Name(ctx->NAME()->getText()),
        false
      );
  }

  virtual antlrcpp::Any visitDeclTab(grammaireParser::DeclTabContext *ctx) override {
    cout<<"DeclTab"<<endl;
    return (DeclarationTab*)
      new DeclarationTab(
      (Type)visit(ctx->type()),
        (Name*) new Name(ctx->NAME()->getText()),
        false,
        (Val*) new Val(stoi(ctx->VAL()->getText()))
      );
  }

  virtual antlrcpp::Any visitInitTab(grammaireParser::InitTabContext *ctx) override {
    cout<<"InitTab"<<endl;
    return (InitialisationTab*)
      new InitialisationTab(
      (Type)visit(ctx->type()),
        (Name*) new Name(ctx->NAME()->getText()),
        false,
        (Val*) new Val(stoi(ctx->VAL()->getText())),
        (ParametreAppel*)visit(ctx->parametreAppel())
      );
  }

  virtual antlrcpp::Any visitInitVar(grammaireParser::InitVarContext *ctx) override {
    cout<<"InitVar"<<endl;
    return (InitialisationVal*)
      new InitialisationVal(
      (Type)visit(ctx->type()),
        (Name*) new Name(ctx->NAME()->getText()),
        false,
        (Val*) new Val(stoi(ctx->VAL()->getText()))
      );
  }

  virtual antlrcpp::Any visitInitConst(grammaireParser::InitConstContext *ctx) override {
    cout<<"InitConst"<<endl;
    return (InitialisationVal*)
      new InitialisationVal(
      (Type)visit(ctx->type()),
        (Name*) new Name(ctx->NAME()->getText()),
        true,
        (Val*) new Val(stoi(ctx->VAL()->getText()))
      );
  }

  virtual antlrcpp::Any visitExprXorBit(grammaireParser::ExprXorBitContext *ctx) override {
  		cout<<"visitExprXorBit"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *) visit(ctx->expr(0)),
  				BITWISE_XOR,
  				(Expr *) visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprMult(grammaireParser::ExprMultContext *ctx) override {
  		cout<<"visitExprMult"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				MULT,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprName(grammaireParser::ExprNameContext *ctx) override {
  		cout<<"visitExprName"<<endl;
  		return (Expr *)
  			new Name(ctx->NAME()->getText());
  	}

  	virtual antlrcpp::Any visitExprNoBit(grammaireParser::ExprNoBitContext *ctx) override {
  		cout<<"visitExprNoBit"<<endl;
  		return (Expr *)
  			new OperationUnaire((Expr *) visit(ctx->expr()), NO_BIT);
  	}

  	virtual antlrcpp::Any visitExprChar(grammaireParser::ExprCharContext *ctx) override {
  		cout<<"visitExprChar"<<endl;
  		return (Expr *)
  			new Char((ctx->CHAR()->getText()).at(0));
  	}

  	virtual antlrcpp::Any visitExprSupOrEqual(grammaireParser::ExprSupOrEqualContext *ctx) override {
  		cout<<"visitExprSupOrEqual"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				SUP_EGAL,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprAffect(grammaireParser::ExprAffectContext *ctx) override {
  		cout<<"visitExprAffect"<<endl;
  		return (Expr *) visit(ctx->affectation());
  	}

  	virtual antlrcpp::Any visitExprSup(grammaireParser::ExprSupContext *ctx) override {
  		cout<<"visitExprSup"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				SUP,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprInfOrEqual(grammaireParser::ExprInfOrEqualContext *ctx) override {
  		cout<<"visitExprInfOrEqual"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				INF_EGAL,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprFnct(grammaireParser::ExprFnctContext *ctx) override {
  		cout<<"visitExprFnct"<<endl;
  		return (Expr *)
  			new ExprAppel(
          new Name(ctx->NAME()->getText()),
  				(ParametreAppel *) visit(ctx->parametreAppel())
  			);
  	}

  	virtual antlrcpp::Any visitExprDiv(grammaireParser::ExprDivContext *ctx) override {
  		cout<<"visitExprDiv"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				DIV,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprAnd(grammaireParser::ExprAndContext *ctx) override {
  		cout<<"visitExprAndContext"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				AND,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprTab(grammaireParser::ExprTabContext *ctx) override {
  		cout<<"visitExprTab"<<endl;
  		return (Expr *)
  			new NameTab(
          ctx->NAME()->getText(),
  			(Expr *)visit(ctx->expr())
  			);
  	}

  	virtual antlrcpp::Any visitExprOr(grammaireParser::ExprOrContext *ctx) override {
  		cout<<"visitExprOr"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				OR,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprNo(grammaireParser::ExprNoContext *ctx) override {
  		cout<<"visitExprNo"<<endl;
  		return (Expr *)
  			new OperationUnaire(
  			(Expr *)visit(ctx->expr()),
  				NO);
  	}

  	virtual antlrcpp::Any visitExprDiff(grammaireParser::ExprDiffContext *ctx) override {
  		cout<<"visitExprDiff"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *) visit(ctx->expr(0)),
  				DIFF, (Expr *) visit(ctx->expr(1)));
  	}

  	virtual antlrcpp::Any visitExprSub(grammaireParser::ExprSubContext *ctx) override {
  		cout<<"visitExprSub"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				MINUS,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprAndBit(grammaireParser::ExprAndBitContext *ctx) override {
  		cout<<"visitExprAndBit"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				BITWISE_AND,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprOrBit(grammaireParser::ExprOrBitContext *ctx) override {
  		cout<<"visitExprOrBit"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				BITWISE_OR,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprEqual(grammaireParser::ExprEqualContext *ctx) override {
  		cout<<"visitExprEqual"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				BITWISE_OR,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprVal(grammaireParser::ExprValContext *ctx) override {
  		cout<<"visitExprVal"<<endl;
  		return (Expr *)
  			new Val(stoi(ctx->VAL()->getText()));
  	}

  	virtual antlrcpp::Any visitExprAdd(grammaireParser::ExprAddContext *ctx) override {
  		cout<<"visitExprAdd"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *) visit(ctx->expr(0)),
  				PLUS,
  				(Expr *) visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprInf(grammaireParser::ExprInfContext *ctx) override {
  		cout<<"visitExprInf"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				INF,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitExprMod(grammaireParser::ExprModContext *ctx) override {
  		cout<<"visitExprMod"<<endl;
  		return (Expr *)
  			new OperationBinaire(
  			(Expr *)visit(ctx->expr(0)),
  				MODULO,
  				(Expr *)visit(ctx->expr(1))
  			);
  	}

  	virtual antlrcpp::Any visitParametreAppel(grammaireParser::ParametreAppelContext *ctx) override {
  		vector<Expr *> vecteurParam;
  		for (int i = 0; i < (ctx->expr()).size(); i++)
  		{
  			vecteurParam.push_back((Expr *) visit(ctx->expr(i)));
  		}
  		return (ParametreAppel *)
  			new ParametreAppel(vecteurParam);
  	}

  	virtual antlrcpp::Any visitAffectEqual(grammaireParser::AffectEqualContext *ctx) override {

  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *) visit(ctx->leftValue()),
  				EGAL,
  				(Expr *) visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectPlusEqual(grammaireParser::AffectPlusEqualContext *ctx) override {

  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				PLUS_EGAL,
  				(Expr *)visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectMinusEqual(grammaireParser::AffectMinusEqualContext *ctx) override {

  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				MOINS_EGAL,
  				(Expr *)visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectMultEqual(grammaireParser::AffectMultEqualContext *ctx) override {


  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				MULT_EGAL,
  				(Expr *)visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectDivision(grammaireParser::AffectDivisionContext *ctx) override {

  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *) visit(ctx->leftValue()),
  				DIV_EGAL,
  				(Expr *)visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectBitwiseAnd(grammaireParser::AffectBitwiseAndContext *ctx) override {


  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *) visit(ctx->leftValue()),
  				BITWISE_AND_A,
  				(Expr *) visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectBitwiseOr(grammaireParser::AffectBitwiseOrContext *ctx) override {


  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				BITWISE_OR_A,
  				(Expr *)visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectBitwiseXor(grammaireParser::AffectBitwiseXorContext *ctx) override {


  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				BITWISE_XOR_A,
  				(Expr *)visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectBitwiseRightShift(grammaireParser::AffectBitwiseRightShiftContext *ctx) override {

  		return (Affectation *)
  			new AffectationBinaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				BITWISE_RIGHTSHIFT,
  				(Expr *)visit(ctx->expr())
  			);

  	}

  	virtual antlrcpp::Any visitAffectIncrementationBefore(grammaireParser::AffectIncrementationBeforeContext *ctx) override {

  		return (Affectation *)
  			new AffectationUnaire(
  			(LeftValue *) visit(ctx->leftValue()),
  				PPLUS
  				);

  	}

  	virtual antlrcpp::Any visitAffectDecrementationBefore(grammaireParser::AffectDecrementationBeforeContext *ctx) override {
  		return (Affectation *)
  			new AffectationUnaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				MMOINS
  				);
  	}

  	virtual antlrcpp::Any visitAffectIncrementationAfter(grammaireParser::AffectIncrementationAfterContext *ctx) override {
  		return (Affectation *)
  			new AffectationUnaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				PPLUS_AFTER
  				);
  	}
  	virtual antlrcpp::Any visitAffectDecrementationAfter(grammaireParser::AffectDecrementationAfterContext *ctx) override {
  		return (Affectation *)
  			new AffectationUnaire(
  			(LeftValue *)visit(ctx->leftValue()),
  				MMOINS_AFTER
  				);
  	}

  	virtual antlrcpp::Any visitLeftValueVar(grammaireParser::LeftValueVarContext *ctx) override {
  		return (LeftValue *)
  			new Name(ctx->NAME()->getText());
  	}

  	virtual antlrcpp::Any visitLeftValueTab(grammaireParser::LeftValueTabContext *ctx) override {
  		return (LeftValue *)
  			new NameTab(
          ctx->NAME()->getText(),
  			(Expr *) visit(ctx->expr())
  			);
  	}

  	virtual antlrcpp::Any visitDefinition(grammaireParser::DefinitionContext *ctx) override {
  		return (Definition *)
  			new Definition(
  			(Type *)visit(ctx->type()),
  				new Name(ctx->NAME()->getText()),
  				(ParametreDefinition *)visit(ctx->parametreDefinition()),
  				(Bloc *)visit(ctx->bloc())
  			);
  	}

  	virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *ctx) override {
  		vector<InstructionStruct *> vecteurInstr;
  		vector<InitDecl *> vecteurDecl;
  		for (int i = 0; i < (ctx->instructionStruct()).size(); i++)
  		{
  			vecteurInstr.push_back( (InstructionStruct *) visit(ctx->instructionStruct(i)));
  		}
  		for (int i = 0; i < (ctx->initDecl()).size(); i++)
  		{
  			vecteurDecl.push_back((InitDecl *) visit(ctx->initDecl(i)));
  		}
  		return (Bloc *)
  			new Bloc(vecteurDecl, vecteurInstr);
  	}

  	virtual antlrcpp::Any visitBlocStruct(grammaireParser::BlocStructContext *ctx) override {
  		vector<InstructionStruct *> vecteurInstr;
  		for (int i = 0; i < (ctx->instructionStruct()).size(); i++)
  		{
  			vecteurInstr.push_back(visit(ctx->instructionStruct(i)));
  		}
  		return (BlocStruct *)
  			new BlocStruct(vecteurInstr);
  	}

  virtual antlrcpp::Any visitParamDefinitionNonVide(grammaireParser::ParamDefinitionNonVideContext *ctx) override {
  	vector<Parametre *> vecteurParam;
  	for (int i = 0; i < (ctx->parametre()).size(); i++) {
  		vecteurParam.push_back((Parametre*)visit(ctx->parametre(i)));
  	}
  	return (ParametreDefinition*) new ParametreDefinition(vecteurParam);
  }

  virtual antlrcpp::Any visitParamDefinitionVide(grammaireParser::ParamDefinitionVideContext *ctx) override {
  	return (ParametreDefinition*) new ParametreDefinition();
  }

  virtual antlrcpp::Any visitParametreSimple(grammaireParser::ParametreSimpleContext *ctx) override {
  	return (Parametre*)
  		new Parametre(
  		(Type *)visit(ctx->type()),
  		  new Name(ctx->NAME()->getText()),
  			false // hasBrackets
  		);
  }

  virtual antlrcpp::Any visitParametreTab(grammaireParser::ParametreTabContext *ctx) override {
  	return (Parametre*)
  		new Parametre(
  		(Type *) visit(ctx->type()),
  			new Name(ctx->NAME()->getText()),
  			true // hasBrackets
  		);
  }

  virtual antlrcpp::Any visitIf(grammaireParser::IfContext *ctx) override {
  	return (StructureControle *)
  		new StructureIf((Expr *)visit(ctx->expr()), (BlocStruct *)visit(ctx->blocStruct()), (ElseBloc *) visit(ctx->elseBloc()));
  }

  virtual antlrcpp::Any visitWhile(grammaireParser::WhileContext *ctx) override {
  	return (StructureControle *)
  		new StructureWhile((Expr *)visit(ctx->expr()), (BlocStruct *) visit(ctx->blocStruct()));
  }

  virtual antlrcpp::Any visitElseBloc(grammaireParser::ElseBlocContext *ctx) override {
  	return (ElseBloc *)
  		new ElseBloc((BlocStruct *)visit(ctx->blocStruct()));
  }

  virtual antlrcpp::Any visitInt32(grammaireParser::Int32Context *ctx) override {
  	return (Type)int32_type;
  }

  virtual antlrcpp::Any visitInt64(grammaireParser::Int64Context *ctx) override {
  	return (Type)int64_type;
  }

  virtual antlrcpp::Any visitChar(grammaireParser::CharContext *ctx) override {
  	return (Type)char_type;
  }

  virtual antlrcpp::Any visitType_void(grammaireParser::Type_voidContext *ctx) override {
  	return (Type)void_type;
  }



  protected:
  	grammaireParser::ProgrammeContext *ctxCourant;
  	grammaireParser::BlocContext *ctxBlocCourant;

  };
