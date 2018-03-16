
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

  virtual antlrcpp::Any visitProgramme(grammaireParser::ProgrammeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(grammaireParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarGlobale(grammaireParser::VarGlobaleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(grammaireParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitialisation(grammaireParser::InitialisationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(grammaireParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametreAppel(grammaireParser::ParametreAppelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation(grammaireParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeftValue(grammaireParser::LeftValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition(grammaireParser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametreDefinition(grammaireParser::ParametreDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructureControle(grammaireParser::StructureControleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseBloc(grammaireParser::ElseBlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(grammaireParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_void(grammaireParser::Type_voidContext *ctx) override {
    return visitChildren(ctx);
  }


};

