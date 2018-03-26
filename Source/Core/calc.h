#pragma once
#include "antlr4-runtime.h"
#include "ExprBaseVisitor.h"
#include "Reader/grammaireParser.h"
#include <vector>
using namespace std;

class Calc : public grammaireBaseVisitor {
public:
	virtual antlrcpp::Any visitProgramme(grammaireParser::ProgrammeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstDecl(grammaireParser::InstDeclContext *ctx) override {

      return (Instruction *) visit(ctx->declaration());

  }

  virtual antlrcpp::Any visitInstInit(grammaireParser::InstInitContext *ctx) override {

     return (Instruction *) visit(ctx->initialisation());

}
  virtual antlrcpp::Any visitInstExpr(grammaireParser::InstExprContext *ctx) override {

    return (Instruction *) visit(ctx->expr());

}
  virtual antlrcpp::Any visitInstbloc(grammaireParser::InstblocContext *ctx) override {

      return (Instruction *) visit(ctx->bloc());

     }

  virtual antlrcpp::Any visitInstStrucControl(grammaireParser::InstructionControle *ctx) override {

    return (Instruction *) visit(ctx->structControle());

  }

  virtual antlrcpp::Any visitInstBreak(grammaireParser::InstBreakContext *ctx) override {
     return 0;

  }

  virtual antlrcpp::Any visitInstReturn(grammaireParser::InstReturnContext *ctx) override {


    return (Instruction *) visit(ctx->expr);

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
    return (Expr *)
          new OperationBinaire(
          (Expr *)visit(ctx->expr(0)),
           BITWISE_XOR,
          (Expr *)visit(ctx->expr(1))
          );
  }

  virtual antlrcpp::Any visitExprMult(grammaireParser::ExprMultContext *ctx) override {
    return (Expr *)
              new OperationBinaire(
              (Expr *)visit(ctx->expr(0)),
               MULT,
              (Expr *)visit(ctx->expr(1))
              );
  }

  virtual antlrcpp::Any visitExprName(grammaireParser::ExprNameContext *ctx) override {
     return (Expr *)
                  new Name(ctx->NAME()->getText());
  }

  virtual antlrcpp::Any visitExprNoBit(grammaireParser::ExprNoBitContext *ctx) override {
     return (Expr *)
                  new OperationUnaire((Expr *)visit(ctx->expr(1)),NO_BIT);
  }

  virtual antlrcpp::Any visitExprChar(grammaireParser::ExprCharContext *ctx) override {
    return (Expr *)
                      new Char((ctx->CHAR()->getText()).at(0));
  }

  virtual antlrcpp::Any visitExprSupOrEqual(grammaireParser::ExprSupOrEqualContext *ctx) override {
     return (Expr *)
              new OperationBinaire(
              (Expr *)visit(ctx->expr(0)),
               SUP_EGAL,
              (Expr *)visit(ctx->expr(1))
              );
  }

  virtual antlrcpp::Any visitExprAffect(grammaireParser::ExprAffectContext *ctx) override {
    return (Expr *)
                  new Affectation(ctx->affectation());
  }

  virtual antlrcpp::Any visitExprSup(grammaireParser::ExprSupContext *ctx) override {
    return (Expr *)
                      new OperationBinaire(
                                    (Expr *)visit(ctx->expr(0)),
                                     SUP,
                                    (Expr *)visit(ctx->expr(1))
                                    );
  }

  virtual antlrcpp::Any visitExprInfOrEqual(grammaireParser::ExprInfOrEqualContext *ctx) override {
    return (Expr *)
                  new OperationBinaire(
                  (Expr *)visit(ctx->expr(0)),
                   INF_EGAL,
                  (Expr *)visit(ctx->expr(1))
                  );
  }

  virtual antlrcpp::Any visitExprFnct(grammaireParser::ExprFnctContext *ctx) override {
    return (Expr *)
                      new ExprAppel(
                      (Name *)visit(ctx->name()),
                      (ParametreAppel *)visit(ctx->parameters())
                      );
  }

  virtual antlrcpp::Any visitExprDiv(grammaireParser::ExprDivContext *ctx) override {
    return (Expr *)
    new OperationBinaire(
                          (Expr *)visit(ctx->expr(0)),
                           DIV,
                          (Expr *)visit(ctx->expr(1))
                          );
  }

  virtual antlrcpp::Any visitExprAnd(grammaireParser::ExprAndContext *ctx) override {
    return (Expr *)
    new OperationBinaire(
            (Expr *)visit(ctx->expr(0)),
             AND,
             (Expr *)visit(ctx->expr(1))
              );
  }

  virtual antlrcpp::Any visitExprTab(grammaireParser::ExprTabContext *ctx) override {
       return (Expr *)
           new NameTab(ctx->NAME()->getText()),
                        (Expr *)visit(ctx->indice())
                         );
  }

  virtual antlrcpp::Any visitExprOr(grammaireParser::ExprOrContext *ctx) override {
    return (Expr *)
        new OperationBinaire(
                (Expr *)visit(ctx->expr(0)),
                 OR,
                 (Expr *)visit(ctx->expr(1))
                  );
  }

  virtual antlrcpp::Any visitExprNo(grammaireParser::ExprNoContext *ctx) override {
    return (Expr *)
        new OperationUnaire(
                (Expr *)visit(ctx->expr()),
                 NO);
  }

  virtual antlrcpp::Any visitExprDiff(grammaireParser::ExprDiffContext *ctx) override {
    return (Expr *)
            new OperationUnaire(
                    (Expr *)visit(ctx->expr()),
                     DIFF);
  }

  virtual antlrcpp::Any visitExprSub(grammaireParser::ExprSubContext *ctx) override {
    return (Expr *)
        new OperationBinaire(
                (Expr *)visit(ctx->expr(0)),
                 MINUS,
                 (Expr *)visit(ctx->expr(1))
                  );
  }

  virtual antlrcpp::Any visitExprAndBit(grammaireParser::ExprAndBitContext *ctx) override {
    return (Expr *)
        new OperationBinaire(
                (Expr *)visit(ctx->expr(0)),
                 BITWISE_AND,
                 (Expr *)visit(ctx->expr(1))
                  );
  }

  virtual antlrcpp::Any visitExprOrBit(grammaireParser::ExprOrBitContext *ctx) override {
    return (Expr *)
            new OperationBinaire(
                    (Expr *)visit(ctx->expr(0)),
                     BITWISE_OR,
                     (Expr *)visit(ctx->expr(1))
                      );
  }

  virtual antlrcpp::Any visitExprEqual(grammaireParser::ExprEqualContext *ctx) override {
    return (Expr *)
                new OperationBinaire(
                        (Expr *)visit(ctx->expr(0)),
                         BITWISE_OR,
                         (Expr *)visit(ctx->expr(1))
                          );
  }

  virtual antlrcpp::Any visitExprVal(grammaireParser::ExprValContext *ctx) override {
    return (Expr *)
                    new Val(stoi(ctx->VAL()));
  }

  virtual antlrcpp::Any visitExprAdd(grammaireParser::ExprAddContext *ctx) override {
    return (Expr *)
                    new OperationBinaire(
                            (Expr *)visit(ctx->expr(0)),
                             EGAL,
                             (Expr *)visit(ctx->expr(1))
                              );
  }

  virtual antlrcpp::Any visitExprInf(grammaireParser::ExprInfContext *ctx) override {
    return (Expr *)
                    new OperationBinaire(
                            (Expr *)visit(ctx->expr(0)),
                             INF,
                             (Expr *)visit(ctx->expr(1))
                              );
  }

  virtual antlrcpp::Any visitExprMod(grammaireParser::ExprModContext *ctx) override {
    return (Expr *)
                    new OperationBinaire(
                            (Expr *)visit(ctx->expr(0)),
                             MODULO,
                             (Expr *)visit(ctx->expr(1))
                              );
  }

  virtual antlrcpp::Any visitParametreAppel(grammaireParser::ParametreAppelContext *ctx) override {
    vector<ParametreAppel *> vecteurParam =new vector<ParametreAppel *>();
    for(int i=0;i<(ctx->parameters()).size();i++)
    {
        vecteurParam.push_back(ctx->expr(i));
    }
    return (ParametreAppel *)
    new ParametreAppel(vecteurParam);
  }

  virtual antlrcpp::Any visitAffectEqual(grammaireParser::AffectEqualContext *ctx) override {

      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       EGAL,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectPlusEqual(grammaireParser::AffectPlusEqualContext *ctx) override {

      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       PLUS_EGAL,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectMinusEqual(grammaireParser::AffectMinusEqualContext *ctx) override {

      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       MOINS_EGAL,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectMultEqual(grammaireParser::AffectMultEqualContext *ctx) override {


      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       MULT_EGAL,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectDivision(grammaireParser::AffectDivisionContext *ctx) override {

      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       DIV_EGAL,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectBitwiseAnd(grammaireParser::AffectBitwiseAndContext *ctx) override {


      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       BITWISE_AND,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectBitwiseOr(grammaireParser::AffectBitwiseOrContext *ctx) override {


      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       BITWISE_OR,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectBitwiseXor(grammaireParser::AffectBitwiseXorContext *ctx) override {


      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       BITWISE_XOR,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectBitwiseRightShift(grammaireParser::AffectBitwiseRightShiftContext *ctx) override {

      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       BITWISE_RIGHTSHIFT,
      (RightValue *)visit(ctx->rightValue())
      );

  }

  virtual antlrcpp::Any visitAffectIncrementationBefore(grammaireParser::AffectIncrementationBeforeContext *ctx) override {

      return (Affectation *)
      new AffectationBinaire(
      (LeftValue *)visit(ctx->leftValue()),
       PPLUS,
      );

  }

  virtual antlrcpp::Any visitAffectDecrementationBefore(grammaireParser::AffectDecrementationBeforeContext *ctx) override {
    return (Affectation *)
          new AffectationBinaire(
          (LeftValue *)visit(ctx->leftValue()),
           MMOINS,
          );
  }

  virtual antlrcpp::Any visitAffectDecrementationAfter(grammaireParser::AffectDecrementationAfterContext *ctx) override {
    return (Affectation *)
              new AffectationBinaire(
              (LeftValue *)visit(ctx->leftValue()),
               MMOINS_AFTER,
              );
  }

  virtual antlrcpp::Any visitLeftValueVar(grammaireParser::LeftValueVarContext *ctx) override {
    return (LeftValue *)
                      new Name(ctx->NAME()->getText());
  }

  virtual antlrcpp::Any visitLeftValueTab(grammaireParser::LeftValueTabContext *ctx) override {
    return (LeftValue *)
                      new NameTab(ctx->NAME()->getText()),
                                    (Expr *)visit(ctx->indice())
                                   );
  }

  virtual antlrcpp::Any visitDefinition(grammaireParser::DefinitionContext *ctx) override {
    return (Definition *)
          new Definition(
          (Type *)visit(ctx->type()),
           (Name *)visit(ctx->name()),
          (ParametreDefinition *)visit(ctx->params()),
          (Bloc *)visit(ctx->bloc())
          );
  }

  virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *ctx) override {
    vector<Instruction *> vecteurInstr =new vector<Instruction *>();
        for(int i=0;i<(ctx->instructions()).size();i++)
        {
            vecteurInstr.push_back(ctx->instruction(i));
        }
        return (Bloc *)
        new Bloc(vecteurInstr);
      }

  virtual antlrcpp::Any visitParamDefinitionNonVide(grammaireParser::ParamDefinitionNonVideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamDefinitionVide(grammaireParser::ParamDefinitionVideContext *ctx) override {
  }

  virtual antlrcpp::Any visitIf(grammaireParser::IfContext *ctx) override {
    return (StructControle *)
    new StructureIf((Expr *)visit(ctx->condition),(Bloc *)visit(ctx->bloc()),(ElseBloc *)visit(ctx->elsebloc()));
  }

  virtual antlrcpp::Any visitWhile(grammaireParser::WhileContext *ctx) override {
    return (StructControle *)
        new StructureWhile((Expr *)visit(ctx->condition), (Bloc *)visit(ctx->bloc()));
  }

  virtual antlrcpp::Any visitElseBloc(grammaireParser::ElseBlocContext *ctx) override {
    return (ElseBloc *)
        new ElseBloc((Bloc *)visit(ctx->bloc()));
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