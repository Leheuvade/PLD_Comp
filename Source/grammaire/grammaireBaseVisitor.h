
// Generated from grammaire.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "grammaireVisitor.h"


/**
 * This class provides an empty implementation of grammaireVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  grammaireBaseVisitor : public grammaireVisitor {
public: 

  virtual antlrcpp::Any visitEntree(grammaireParser::EntreeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramme(grammaireParser::ProgrammeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(grammaireParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInit(grammaireParser::InitContext *ctx) override {
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
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclVar(grammaireParser::DeclVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclTab(grammaireParser::DeclTabContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitTab(grammaireParser::InitTabContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitVar(grammaireParser::InitVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitConst(grammaireParser::InitConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprXorBit(grammaireParser::ExprXorBitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprMult(grammaireParser::ExprMultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprName(grammaireParser::ExprNameContext *ctx) override {
    return visitChildren(ctx);
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

  virtual antlrcpp::Any visitAffectIncrementationAfter(grammaireParser::AffectIncrementationAfterContext *ctx) override {
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

  virtual antlrcpp::Any visitDefFnct(grammaireParser::DefFnctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefProc(grammaireParser::DefProcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlocStruct(grammaireParser::BlocStructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamDefinitionNonVide(grammaireParser::ParamDefinitionNonVideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamDefinitionVide(grammaireParser::ParamDefinitionVideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametreSimple(grammaireParser::ParametreSimpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametreTab(grammaireParser::ParametreTabContext *ctx) override {
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
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt64(grammaireParser::Int64Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar(grammaireParser::CharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_void(grammaireParser::Type_voidContext *ctx) override {
    return visitChildren(ctx);
  }


};

