
// Generated from grammaire.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "grammaireParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by grammaireParser.
 */
class  grammaireVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public: 
 

  /**
   * Visit parse trees produced by grammaireParser.
   */
    virtual antlrcpp::Any visitEntree(grammaireParser::EntreeContext *context) = 0;

    virtual antlrcpp::Any visitProgramme(grammaireParser::ProgrammeContext *context) = 0;

    virtual antlrcpp::Any visitDecl(grammaireParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitInit(grammaireParser::InitContext *context) = 0;

    virtual antlrcpp::Any visitInstExpr(grammaireParser::InstExprContext *context) = 0;

    virtual antlrcpp::Any visitInstbloc(grammaireParser::InstblocContext *context) = 0;

    virtual antlrcpp::Any visitInstStrucControl(grammaireParser::InstStrucControlContext *context) = 0;

    virtual antlrcpp::Any visitInstBreak(grammaireParser::InstBreakContext *context) = 0;

    virtual antlrcpp::Any visitInstReturn(grammaireParser::InstReturnContext *context) = 0;

    virtual antlrcpp::Any visitVarDecl(grammaireParser::VarDeclContext *context) = 0;

    virtual antlrcpp::Any visitVarInit(grammaireParser::VarInitContext *context) = 0;

    virtual antlrcpp::Any visitDeclConst(grammaireParser::DeclConstContext *context) = 0;

    virtual antlrcpp::Any visitDeclVar(grammaireParser::DeclVarContext *context) = 0;

    virtual antlrcpp::Any visitDeclTab(grammaireParser::DeclTabContext *context) = 0;

    virtual antlrcpp::Any visitInitTab(grammaireParser::InitTabContext *context) = 0;

    virtual antlrcpp::Any visitInitVar(grammaireParser::InitVarContext *context) = 0;

    virtual antlrcpp::Any visitInitConst(grammaireParser::InitConstContext *context) = 0;

    virtual antlrcpp::Any visitExprXorBit(grammaireParser::ExprXorBitContext *context) = 0;

    virtual antlrcpp::Any visitExprMult(grammaireParser::ExprMultContext *context) = 0;

    virtual antlrcpp::Any visitExprName(grammaireParser::ExprNameContext *context) = 0;

    virtual antlrcpp::Any visitExprNoBit(grammaireParser::ExprNoBitContext *context) = 0;

    virtual antlrcpp::Any visitExprChar(grammaireParser::ExprCharContext *context) = 0;

    virtual antlrcpp::Any visitExprSupOrEqual(grammaireParser::ExprSupOrEqualContext *context) = 0;

    virtual antlrcpp::Any visitExprAffect(grammaireParser::ExprAffectContext *context) = 0;

    virtual antlrcpp::Any visitExprSup(grammaireParser::ExprSupContext *context) = 0;

    virtual antlrcpp::Any visitExprInfOrEqual(grammaireParser::ExprInfOrEqualContext *context) = 0;

    virtual antlrcpp::Any visitExprFnct(grammaireParser::ExprFnctContext *context) = 0;

    virtual antlrcpp::Any visitExprDiv(grammaireParser::ExprDivContext *context) = 0;

    virtual antlrcpp::Any visitExprAnd(grammaireParser::ExprAndContext *context) = 0;

    virtual antlrcpp::Any visitExprTab(grammaireParser::ExprTabContext *context) = 0;

    virtual antlrcpp::Any visitExprOr(grammaireParser::ExprOrContext *context) = 0;

    virtual antlrcpp::Any visitExprNo(grammaireParser::ExprNoContext *context) = 0;

    virtual antlrcpp::Any visitExprDiff(grammaireParser::ExprDiffContext *context) = 0;

    virtual antlrcpp::Any visitExprSub(grammaireParser::ExprSubContext *context) = 0;

    virtual antlrcpp::Any visitExprAndBit(grammaireParser::ExprAndBitContext *context) = 0;

    virtual antlrcpp::Any visitExprOrBit(grammaireParser::ExprOrBitContext *context) = 0;

    virtual antlrcpp::Any visitExprEqual(grammaireParser::ExprEqualContext *context) = 0;

    virtual antlrcpp::Any visitExprVal(grammaireParser::ExprValContext *context) = 0;

    virtual antlrcpp::Any visitExprAdd(grammaireParser::ExprAddContext *context) = 0;

    virtual antlrcpp::Any visitExprInf(grammaireParser::ExprInfContext *context) = 0;

    virtual antlrcpp::Any visitExprMod(grammaireParser::ExprModContext *context) = 0;

    virtual antlrcpp::Any visitParametreAppel(grammaireParser::ParametreAppelContext *context) = 0;

    virtual antlrcpp::Any visitAffectEqual(grammaireParser::AffectEqualContext *context) = 0;

    virtual antlrcpp::Any visitAffectPlusEqual(grammaireParser::AffectPlusEqualContext *context) = 0;

    virtual antlrcpp::Any visitAffectMinusEqual(grammaireParser::AffectMinusEqualContext *context) = 0;

    virtual antlrcpp::Any visitAffectMultEqual(grammaireParser::AffectMultEqualContext *context) = 0;

    virtual antlrcpp::Any visitAffectDivision(grammaireParser::AffectDivisionContext *context) = 0;

    virtual antlrcpp::Any visitAffectBitwiseAnd(grammaireParser::AffectBitwiseAndContext *context) = 0;

    virtual antlrcpp::Any visitAffectBitwiseOr(grammaireParser::AffectBitwiseOrContext *context) = 0;

    virtual antlrcpp::Any visitAffectBitwiseXor(grammaireParser::AffectBitwiseXorContext *context) = 0;

    virtual antlrcpp::Any visitAffectBitwiseRightShift(grammaireParser::AffectBitwiseRightShiftContext *context) = 0;

    virtual antlrcpp::Any visitAffectIncrementationBefore(grammaireParser::AffectIncrementationBeforeContext *context) = 0;

    virtual antlrcpp::Any visitAffectDecrementationBefore(grammaireParser::AffectDecrementationBeforeContext *context) = 0;

    virtual antlrcpp::Any visitAffectIncrementationAfter(grammaireParser::AffectIncrementationAfterContext *context) = 0;

    virtual antlrcpp::Any visitAffectDecrementationAfter(grammaireParser::AffectDecrementationAfterContext *context) = 0;

    virtual antlrcpp::Any visitLeftValueVar(grammaireParser::LeftValueVarContext *context) = 0;

    virtual antlrcpp::Any visitLeftValueTab(grammaireParser::LeftValueTabContext *context) = 0;

    virtual antlrcpp::Any visitDefFnct(grammaireParser::DefFnctContext *context) = 0;

    virtual antlrcpp::Any visitDefProc(grammaireParser::DefProcContext *context) = 0;

    virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitBlocStruct(grammaireParser::BlocStructContext *context) = 0;

    virtual antlrcpp::Any visitParamDefinitionNonVide(grammaireParser::ParamDefinitionNonVideContext *context) = 0;

    virtual antlrcpp::Any visitParamDefinitionVide(grammaireParser::ParamDefinitionVideContext *context) = 0;

    virtual antlrcpp::Any visitParametreSimple(grammaireParser::ParametreSimpleContext *context) = 0;

    virtual antlrcpp::Any visitParametreTab(grammaireParser::ParametreTabContext *context) = 0;

    virtual antlrcpp::Any visitIf(grammaireParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitWhile(grammaireParser::WhileContext *context) = 0;

    virtual antlrcpp::Any visitElseBloc(grammaireParser::ElseBlocContext *context) = 0;

    virtual antlrcpp::Any visitInt32(grammaireParser::Int32Context *context) = 0;

    virtual antlrcpp::Any visitInt64(grammaireParser::Int64Context *context) = 0;

    virtual antlrcpp::Any visitChar(grammaireParser::CharContext *context) = 0;

    virtual antlrcpp::Any visitType_void(grammaireParser::Type_voidContext *context) = 0;


};

