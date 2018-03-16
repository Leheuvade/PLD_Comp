
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
    virtual antlrcpp::Any visitProgramme(grammaireParser::ProgrammeContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(grammaireParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitVarGlobale(grammaireParser::VarGlobaleContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(grammaireParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInitialisation(grammaireParser::InitialisationContext *context) = 0;

    virtual antlrcpp::Any visitExpr(grammaireParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitParametreAppel(grammaireParser::ParametreAppelContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(grammaireParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitLeftValue(grammaireParser::LeftValueContext *context) = 0;

    virtual antlrcpp::Any visitDefinition(grammaireParser::DefinitionContext *context) = 0;

    virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitParametreDefinition(grammaireParser::ParametreDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitStructureControle(grammaireParser::StructureControleContext *context) = 0;

    virtual antlrcpp::Any visitElseBloc(grammaireParser::ElseBlocContext *context) = 0;

    virtual antlrcpp::Any visitType(grammaireParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitType_void(grammaireParser::Type_voidContext *context) = 0;


};

