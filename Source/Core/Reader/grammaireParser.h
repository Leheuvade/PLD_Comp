
// Generated from grammaire.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include <string>
#include <vector>
#using namespace std;

class  grammaireParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, NAME = 49, VAL = 50, 
    COMMENTAIRE = 51, CHAR = 52, WS = 53
  };

  enum {
    RuleProgramme = 0, RuleInstruction = 1, RuleVarGlobale = 2, RuleDeclaration = 3, 
    RuleInitialisation = 4, RuleExpr = 5, RuleParametreAppel = 6, RuleAffectation = 7, 
    RuleLeftValue = 8, RuleDefinition = 9, RuleBloc = 10, RuleParametreDefinition = 11, 
    RuleStructureControle = 12, RuleElseBloc = 13, RuleType = 14, RuleType_void = 15
  };

  grammaireParser(antlr4::TokenStream *input);
  ~grammaireParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgrammeContext;
  class InstructionContext;
  class VarGlobaleContext;
  class DeclarationContext;
  class InitialisationContext;
  class ExprContext;
  class ParametreAppelContext;
  class AffectationContext;
  class LeftValueContext;
  class DefinitionContext;
  class BlocContext;
  class ParametreDefinitionContext;
  class StructureControleContext;
  class ElseBlocContext;
  class TypeContext;
  class Type_voidContext; 

  class  ProgrammeContext : public antlr4::ParserRuleContext {
  public:
    ProgrammeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarGlobaleContext *> varGlobale();
    VarGlobaleContext* varGlobale(size_t i);
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgrammeContext* programme();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstructionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(InstructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InstInitContext : public InstructionContext {
  public:
    InstInitContext(InstructionContext *ctx);

    InitialisationContext *initialisation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstReturnContext : public InstructionContext {
  public:
    InstReturnContext(InstructionContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstBreakContext : public InstructionContext {
  public:
    InstBreakContext(InstructionContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstDeclContext : public InstructionContext {
  public:
    InstDeclContext(InstructionContext *ctx);

    DeclarationContext *declaration();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstblocContext : public InstructionContext {
  public:
    InstblocContext(InstructionContext *ctx);

    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstStrucControlContext : public InstructionContext {
  public:
    InstStrucControlContext(InstructionContext *ctx);

    StructureControleContext *structureControle();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstExprContext : public InstructionContext {
  public:
    InstExprContext(InstructionContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstructionContext* instruction();

  class  VarGlobaleContext : public antlr4::ParserRuleContext {
  public:
    VarGlobaleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarGlobaleContext() : antlr4::ParserRuleContext() { }
    void copyFrom(VarGlobaleContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarInitContext : public VarGlobaleContext {
  public:
    VarInitContext(VarGlobaleContext *ctx);

    InitialisationContext *initialisation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclContext : public VarGlobaleContext {
  public:
    VarDeclContext(VarGlobaleContext *ctx);

    DeclarationContext *declaration();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarGlobaleContext* varGlobale();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclarationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclConstContext : public DeclarationContext {
  public:
    DeclConstContext(DeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclVarContext : public DeclarationContext {
  public:
    DeclVarContext(DeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclTabContext : public DeclarationContext {
  public:
    DeclTabContext(DeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *VAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclarationContext* declaration();

  class  InitialisationContext : public antlr4::ParserRuleContext {
  public:
    InitialisationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InitialisationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(InitialisationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InitConstContext : public InitialisationContext {
  public:
    InitConstContext(InitialisationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *VAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitTabContext : public InitialisationContext {
  public:
    InitTabContext(InitialisationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *VAL();
    ParametreAppelContext *parametreAppel();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVarContext : public InitialisationContext {
  public:
    InitVarContext(InitialisationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *VAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InitialisationContext* initialisation();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprXorBitContext : public ExprContext {
  public:
    ExprXorBitContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMultContext : public ExprContext {
  public:
    ExprMultContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprNameContext : public ExprContext {
  public:
    ExprNameContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprNoBitContext : public ExprContext {
  public:
    ExprNoBitContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprCharContext : public ExprContext {
  public:
    ExprCharContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprSupOrEqualContext : public ExprContext {
  public:
    ExprSupOrEqualContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAffectContext : public ExprContext {
  public:
    ExprAffectContext(ExprContext *ctx);

    AffectationContext *affectation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprSupContext : public ExprContext {
  public:
    ExprSupContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprInfOrEqualContext : public ExprContext {
  public:
    ExprInfOrEqualContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprFnctContext : public ExprContext {
  public:
    ExprFnctContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ParametreAppelContext *parametreAppel();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprDivContext : public ExprContext {
  public:
    ExprDivContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAndContext : public ExprContext {
  public:
    ExprAndContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprTabContext : public ExprContext {
  public:
    ExprTabContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprOrContext : public ExprContext {
  public:
    ExprOrContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprNoContext : public ExprContext {
  public:
    ExprNoContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprDiffContext : public ExprContext {
  public:
    ExprDiffContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprSubContext : public ExprContext {
  public:
    ExprSubContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAndBitContext : public ExprContext {
  public:
    ExprAndBitContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprOrBitContext : public ExprContext {
  public:
    ExprOrBitContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprEqualContext : public ExprContext {
  public:
    ExprEqualContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprValContext : public ExprContext {
  public:
    ExprValContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAddContext : public ExprContext {
  public:
    ExprAddContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprInfContext : public ExprContext {
  public:
    ExprInfContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprModContext : public ExprContext {
  public:
    ExprModContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ParametreAppelContext : public antlr4::ParserRuleContext {
  public:
    ParametreAppelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametreAppelContext* parametreAppel();

  class  AffectationContext : public antlr4::ParserRuleContext {
  public:
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AffectationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AffectationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AffectMinusEqualContext : public AffectationContext {
  public:
    AffectMinusEqualContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectBitwiseAndContext : public AffectationContext {
  public:
    AffectBitwiseAndContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectBitwiseRightShiftContext : public AffectationContext {
  public:
    AffectBitwiseRightShiftContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectEqualContext : public AffectationContext {
  public:
    AffectEqualContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectPlusEqualContext : public AffectationContext {
  public:
    AffectPlusEqualContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectMultEqualContext : public AffectationContext {
  public:
    AffectMultEqualContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectDivisionContext : public AffectationContext {
  public:
    AffectDivisionContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectBitwiseOrContext : public AffectationContext {
  public:
    AffectBitwiseOrContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectBitwiseXorContext : public AffectationContext {
  public:
    AffectBitwiseXorContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectIncrementationBeforeContext : public AffectationContext {
  public:
    AffectIncrementationBeforeContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectDecrementationAfterContext : public AffectationContext {
  public:
    AffectDecrementationAfterContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectDecrementationBeforeContext : public AffectationContext {
  public:
    AffectDecrementationBeforeContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AffectationContext* affectation();

  class  LeftValueContext : public antlr4::ParserRuleContext {
  public:
    LeftValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LeftValueContext() : antlr4::ParserRuleContext() { }
    void copyFrom(LeftValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LeftValueTabContext : public LeftValueContext {
  public:
    LeftValueTabContext(LeftValueContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LeftValueVarContext : public LeftValueContext {
  public:
    LeftValueVarContext(LeftValueContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LeftValueContext* leftValue();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    ParametreDefinitionContext *parametreDefinition();
    BlocContext *bloc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocContext* bloc();

  class  ParametreDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ParametreDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParametreDefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ParametreDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParamDefinitionVideContext : public ParametreDefinitionContext {
  public:
    ParamDefinitionVideContext(ParametreDefinitionContext *ctx);

    Type_voidContext *type_void();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParamDefinitionNonVideContext : public ParametreDefinitionContext {
  public:
    ParamDefinitionNonVideContext(ParametreDefinitionContext *ctx);

    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParametreDefinitionContext* parametreDefinition();

  class  StructureControleContext : public antlr4::ParserRuleContext {
  public:
    StructureControleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StructureControleContext() : antlr4::ParserRuleContext() { }
    void copyFrom(StructureControleContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileContext : public StructureControleContext {
  public:
    WhileContext(StructureControleContext *ctx);

    ExprContext *expr();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfContext : public StructureControleContext {
  public:
    IfContext(StructureControleContext *ctx);

    ExprContext *expr();
    BlocContext *bloc();
    ElseBlocContext *elseBloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StructureControleContext* structureControle();

  class  ElseBlocContext : public antlr4::ParserRuleContext {
  public:
    ElseBlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlocContext *bloc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseBlocContext* elseBloc();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Int64Context : public TypeContext {
  public:
    Int64Context(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Int32Context : public TypeContext {
  public:
    Int32Context(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharContext : public TypeContext {
  public:
    CharContext(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeContext* type();

  class  Type_voidContext : public antlr4::ParserRuleContext {
  public:
    Type_voidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_voidContext* type_void();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

