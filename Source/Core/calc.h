#pragma once
#include "antlr4-runtime.h"
#include "ExprBaseVisitor.h"
#include "Reader/grammaireParser.h"

using namespace std;

class Calc : public grammaireBaseVisitor {
public:
	virtual antlrcpp::Any visitProgramme(grammaireParser::ProgrammeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstDecl(grammaireParser::InstDeclContext *ctx) override {
    if(ctx->declaration()!=nullptr)
    {
      return (Instruction *) visit(ctx->declaration());
    }
  }

  virtual antlrcpp::Any visitInstInit(grammaireParser::InstInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstExpr(grammaireParser::InstExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstbloc(grammaireParser::InstblocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstStrucControl(grammaireParser::InstStrucControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstBreak(grammaireParser::InstBreakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstReturn(grammaireParser::InstReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDecl(grammaireParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarInit(grammaireParser::VarInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclConst(grammaireParser::DeclConstContext *ctx) override {
		return (Declaration*)
			new Declaration(
				(Type) visit(ctx->type()),
				(Name*) new Name(ctx->NAME()->getText()),
				true
			);
  }

  virtual antlrcpp::Any visitDeclVar(grammaireParser::DeclVarContext *ctx) override {
  	return (Declaration*)
			new Declaration(
				(Type) visit(ctx->type()),
				(Name*) new Name(ctx->NAME()->getText()),
				false
			);1
  }

  virtual antlrcpp::Any visitDeclTab(grammaireParser::DeclTabContext *ctx) override {
		return (DeclarationTab*)
			new DeclarationTab(
				(Type) visit(ctx->type()),
				(Name*) new Name(ctx->NAME()->getText()),
				false,
				(Val*) new Val(stoi(ctx->VAL()->getText()))
			);
  }

  virtual antlrcpp::Any visitInitTab(grammaireParser::InitTabContext *ctx) override {
    return (InitialisationTab*)
			new InitialisationTab(
				(Type) visit(ctx->type()),
				(Name*) new Name(ctx->NAME()->getText()),
				false,
				(Val*) new Val(stoi(ctx->VAL()->getText())),
				(ParametreAppel*) visit(ctx->parametreAppel())
			);
  }

  virtual antlrcpp::Any visitInitVar(grammaireParser::InitVarContext *ctx) override {
		return (InitialisationTab*)
			new InitialisationTab(
				(Type) visit(ctx->type()),
				(Name*) new Name(ctx->NAME()->getText()),
				false
			);
  }

  virtual antlrcpp::Any visitInitConst(grammaireParser::InitConstContext *ctx) override {
		return (InitialisationTab*)
			new InitialisationTab(
				(Type) visit(ctx->type()),
				(Name*) new Name(ctx->NAME()->getText()),
				true
			);
  }

  virtual antlrcpp::Any visitExprXorBit(grammaireParser::ExprXorBitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprMult(grammaireParser::ExprMultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprName(grammaireParser::ExprNameContext *ctx) override {
    return (Expression *) new Name(visit(ctx->NAME()->getText()));
  }

  virtual antlrcpp::Any visitExprNoBit(grammaireParser::ExprNoBitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprChar(grammaireParser::ExprCharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprSupOrEqual(grammaireParser::ExprSupOrEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAffect(grammaireParser::ExprAffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprSup(grammaireParser::ExprSupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprInfOrEqual(grammaireParser::ExprInfOrEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprFnct(grammaireParser::ExprFnctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprDiv(grammaireParser::ExprDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAnd(grammaireParser::ExprAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprTab(grammaireParser::ExprTabContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprOr(grammaireParser::ExprOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprNo(grammaireParser::ExprNoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprDiff(grammaireParser::ExprDiffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprSub(grammaireParser::ExprSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAndBit(grammaireParser::ExprAndBitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprOrBit(grammaireParser::ExprOrBitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprEqual(grammaireParser::ExprEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprVal(grammaireParser::ExprValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAdd(grammaireParser::ExprAddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprInf(grammaireParser::ExprInfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprMod(grammaireParser::ExprModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametreAppel(grammaireParser::ParametreAppelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectEqual(grammaireParser::AffectEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectPlusEqual(grammaireParser::AffectPlusEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectMinusEqual(grammaireParser::AffectMinusEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectMultEqual(grammaireParser::AffectMultEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectDivision(grammaireParser::AffectDivisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectBitwiseAnd(grammaireParser::AffectBitwiseAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectBitwiseOr(grammaireParser::AffectBitwiseOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectBitwiseXor(grammaireParser::AffectBitwiseXorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectBitwiseRightShift(grammaireParser::AffectBitwiseRightShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectIncrementationBefore(grammaireParser::AffectIncrementationBeforeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectDecrementationBefore(grammaireParser::AffectDecrementationBeforeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectDecrementationAfter(grammaireParser::AffectDecrementationAfterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeftValueVar(grammaireParser::LeftValueVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeftValueTab(grammaireParser::LeftValueTabContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition(grammaireParser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamDefinitionNonVide(grammaireParser::ParamDefinitionNonVideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamDefinitionVide(grammaireParser::ParamDefinitionVideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf(grammaireParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile(grammaireParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseBloc(grammaireParser::ElseBlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt32(grammaireParser::Int32Context *ctx) override {
    return (Type) int32_type;
  }

  virtual antlrcpp::Any visitInt64(grammaireParser::Int64Context *ctx) override {
    return (Type) int64_type;
  }

  virtual antlrcpp::Any visitChar(grammaireParser::CharContext *ctx) override {
    return (Type) char_type;
  }

  virtual antlrcpp::Any visitType_void(grammaireParser::Type_voidContext *ctx) override {
    return (Type) void_type;
  }
};
