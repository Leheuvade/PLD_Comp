
// Generated from grammaire.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




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
    RuleEntree = 0, RuleProgramme = 1, RuleInitDecl = 2, RuleInstructionStruct = 3, 
    RuleVarGlobale = 4, RuleDeclaration = 5, RuleInitialisation = 6, RuleExpr = 7, 
    RuleParametreAppel = 8, RuleAffectation = 9, RuleLeftValue = 10, RuleDefinition = 11, 
    RuleBloc = 12, RuleBlocStruct = 13, RuleParametreDefinition = 14, RuleParametre = 15, 
    RuleStructureControle = 16, RuleElseBloc = 17, RuleType = 18, RuleType_void = 19
  };

  grammaireParser(antlr4::TokenStream *input);
  ~grammaireParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class EntreeContext;
  class ProgrammeContext;
  class InitDeclContext;
  class InstructionStructContext;
  class VarGlobaleContext;
  class DeclarationContext;
  class InitialisationContext;
  class ExprContext;
  class ParametreAppelContext;
  class AffectationContext;
  class LeftValueContext;
  class DefinitionContext;
  class BlocContext;
  class BlocStructContext;
  class ParametreDefinitionContext;
  class ParametreContext;
  class StructureControleContext;
  class ElseBlocContext;
  class TypeContext;
  class Type_voidContext; 

  class  EntreeContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    EntreeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgrammeContext *programme();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntreeContext* entree();

  class  ProgrammeContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
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

  class  InitDeclContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    InitDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InitDeclContext() : antlr4::ParserRuleContext() { }
    void copyFrom(InitDeclContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InitContext : public InitDeclContext {
  friend class DebugVisit; 
 public:
    InitContext(InitDeclContext *ctx);

    InitialisationContext *initialisation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclContext : public InitDeclContext {
  friend class DebugVisit; 
 public:
    DeclContext(InitDeclContext *ctx);

    DeclarationContext *declaration();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InitDeclContext* initDecl();

  class  InstructionStructContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    InstructionStructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstructionStructContext() : antlr4::ParserRuleContext() { }
    void copyFrom(InstructionStructContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InstReturnContext : public InstructionStructContext {
  friend class DebugVisit; 
 public:
    InstReturnContext(InstructionStructContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstBreakContext : public InstructionStructContext {
  friend class DebugVisit; 
 public:
    InstBreakContext(InstructionStructContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstblocContext : public InstructionStructContext {
  friend class DebugVisit; 
 public:
    InstblocContext(InstructionStructContext *ctx);

    BlocStructContext *blocStruct();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstStrucControlContext : public InstructionStructContext {
  friend class DebugVisit; 
 public:
    InstStrucControlContext(InstructionStructContext *ctx);

    StructureControleContext *structureControle();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstExprContext : public InstructionStructContext {
  friend class DebugVisit; 
 public:
    InstExprContext(InstructionStructContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstructionStructContext* instructionStruct();

  class  VarGlobaleContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    VarGlobaleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarGlobaleContext() : antlr4::ParserRuleContext() { }
    void copyFrom(VarGlobaleContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarInitContext : public VarGlobaleContext {
  friend class DebugVisit; 
 public:
    VarInitContext(VarGlobaleContext *ctx);

    InitialisationContext *initialisation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclContext : public VarGlobaleContext {
  friend class DebugVisit; 
 public:
    VarDeclContext(VarGlobaleContext *ctx);

    DeclarationContext *declaration();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarGlobaleContext* varGlobale();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclarationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclConstContext : public DeclarationContext {
  friend class DebugVisit; 
 public:
    DeclConstContext(DeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclVarContext : public DeclarationContext {
  friend class DebugVisit; 
 public:
    DeclVarContext(DeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclTabContext : public DeclarationContext {
  friend class DebugVisit; 
 public:
    DeclTabContext(DeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *VAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclarationContext* declaration();

  class  InitialisationContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    InitialisationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InitialisationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(InitialisationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InitConstContext : public InitialisationContext {
  friend class DebugVisit; 
 public:
    InitConstContext(InitialisationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *VAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitTabContext : public InitialisationContext {
  friend class DebugVisit; 
 public:
    InitTabContext(InitialisationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *VAL();
    ParametreAppelContext *parametreAppel();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVarContext : public InitialisationContext {
  friend class DebugVisit; 
 public:
    InitVarContext(InitialisationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *VAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InitialisationContext* initialisation();

  class  ExprContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprXorBitContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprXorBitContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMultContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprMultContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprNameContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprNameContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprNoBitContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprNoBitContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprCharContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprCharContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprSupOrEqualContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprSupOrEqualContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAffectContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprAffectContext(ExprContext *ctx);

    AffectationContext *affectation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprSupContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprSupContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprInfOrEqualContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprInfOrEqualContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprFnctContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprFnctContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ParametreAppelContext *parametreAppel();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprDivContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprDivContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAndContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprAndContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprTabContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprTabContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprOrContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprOrContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprNoContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprNoContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprDiffContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprDiffContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprSubContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprSubContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAndBitContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprAndBitContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprOrBitContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprOrBitContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprEqualContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprEqualContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprValContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprValContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAddContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprAddContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprInfContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprInfContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprModContext : public ExprContext {
  friend class DebugVisit; 
 public:
    ExprModContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ParametreAppelContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    ParametreAppelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametreAppelContext* parametreAppel();

  class  AffectationContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AffectationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AffectationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AffectMinusEqualContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectMinusEqualContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectBitwiseAndContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectBitwiseAndContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectBitwiseRightShiftContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectBitwiseRightShiftContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectMultEqualContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectMultEqualContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectDivisionContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectDivisionContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectBitwiseOrContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectBitwiseOrContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectBitwiseXorContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectBitwiseXorContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectDecrementationBeforeContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectDecrementationBeforeContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectEqualContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectEqualContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectPlusEqualContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectPlusEqualContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectIncrementationAfterContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectIncrementationAfterContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectIncrementationBeforeContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectIncrementationBeforeContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectDecrementationAfterContext : public AffectationContext {
  friend class DebugVisit; 
 public:
    AffectDecrementationAfterContext(AffectationContext *ctx);

    LeftValueContext *leftValue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AffectationContext* affectation();

  class  LeftValueContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    LeftValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LeftValueContext() : antlr4::ParserRuleContext() { }
    void copyFrom(LeftValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LeftValueTabContext : public LeftValueContext {
  friend class DebugVisit; 
 public:
    LeftValueTabContext(LeftValueContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LeftValueVarContext : public LeftValueContext {
  friend class DebugVisit; 
 public:
    LeftValueVarContext(LeftValueContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LeftValueContext* leftValue();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefFnctContext : public DefinitionContext {
  friend class DebugVisit; 
 public:
    DefFnctContext(DefinitionContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    ParametreDefinitionContext *parametreDefinition();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefProcContext : public DefinitionContext {
  friend class DebugVisit; 
 public:
    DefProcContext(DefinitionContext *ctx);

    Type_voidContext *type_void();
    antlr4::tree::TerminalNode *NAME();
    ParametreDefinitionContext *parametreDefinition();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DefinitionContext* definition();

  class  BlocContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitDeclContext *> initDecl();
    InitDeclContext* initDecl(size_t i);
    std::vector<InstructionStructContext *> instructionStruct();
    InstructionStructContext* instructionStruct(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocContext* bloc();

  class  BlocStructContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    BlocStructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionStructContext *> instructionStruct();
    InstructionStructContext* instructionStruct(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocStructContext* blocStruct();

  class  ParametreDefinitionContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    ParametreDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParametreDefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ParametreDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParamDefinitionVideContext : public ParametreDefinitionContext {
  friend class DebugVisit; 
 public:
    ParamDefinitionVideContext(ParametreDefinitionContext *ctx);

    Type_voidContext *type_void();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParamDefinitionNonVideContext : public ParametreDefinitionContext {
  friend class DebugVisit; 
 public:
    ParamDefinitionNonVideContext(ParametreDefinitionContext *ctx);

    std::vector<ParametreContext *> parametre();
    ParametreContext* parametre(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParametreDefinitionContext* parametreDefinition();

  class  ParametreContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    ParametreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParametreContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ParametreContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParametreSimpleContext : public ParametreContext {
  friend class DebugVisit; 
 public:
    ParametreSimpleContext(ParametreContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParametreTabContext : public ParametreContext {
  friend class DebugVisit; 
 public:
    ParametreTabContext(ParametreContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParametreContext* parametre();

  class  StructureControleContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    StructureControleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StructureControleContext() : antlr4::ParserRuleContext() { }
    void copyFrom(StructureControleContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileContext : public StructureControleContext {
  friend class DebugVisit; 
 public:
    WhileContext(StructureControleContext *ctx);

    ExprContext *expr();
    BlocStructContext *blocStruct();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfContext : public StructureControleContext {
  friend class DebugVisit; 
 public:
    IfContext(StructureControleContext *ctx);

    ExprContext *expr();
    BlocStructContext *blocStruct();
    ElseBlocContext *elseBloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StructureControleContext* structureControle();

  class  ElseBlocContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    ElseBlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlocStructContext *blocStruct();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseBlocContext* elseBloc();

  class  TypeContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
 public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Int64Context : public TypeContext {
  friend class DebugVisit; 
 public:
    Int64Context(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Int32Context : public TypeContext {
  friend class DebugVisit; 
 public:
    Int32Context(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharContext : public TypeContext {
  friend class DebugVisit; 
 public:
    CharContext(TypeContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeContext* type();

  class  Type_voidContext : public antlr4::ParserRuleContext {
  friend class DebugVisit; 
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

