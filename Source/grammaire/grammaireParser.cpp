
// Generated from grammaire.g4 by ANTLR 4.7.1


#include "grammaireVisitor.h"

#include "grammaireParser.h"


using namespace antlrcpp;
using namespace antlr4;

grammaireParser::grammaireParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

grammaireParser::~grammaireParser() {
  delete _interpreter;
}

std::string grammaireParser::getGrammarFileName() const {
  return "grammaire.g4";
}

const std::vector<std::string>& grammaireParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& grammaireParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- EntreeContext ------------------------------------------------------------------

grammaireParser::EntreeContext::EntreeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grammaireParser::ProgrammeContext* grammaireParser::EntreeContext::programme() {
  return getRuleContext<grammaireParser::ProgrammeContext>(0);
}

tree::TerminalNode* grammaireParser::EntreeContext::EOF() {
  return getToken(grammaireParser::EOF, 0);
}


size_t grammaireParser::EntreeContext::getRuleIndex() const {
  return grammaireParser::RuleEntree;
}

antlrcpp::Any grammaireParser::EntreeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitEntree(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::EntreeContext* grammaireParser::entree() {
  EntreeContext *_localctx = _tracker.createInstance<EntreeContext>(_ctx, getState());
  enterRule(_localctx, 0, grammaireParser::RuleEntree);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    programme();
    setState(41);
    match(grammaireParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgrammeContext ------------------------------------------------------------------

grammaireParser::ProgrammeContext::ProgrammeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<grammaireParser::VarGlobaleContext *> grammaireParser::ProgrammeContext::varGlobale() {
  return getRuleContexts<grammaireParser::VarGlobaleContext>();
}

grammaireParser::VarGlobaleContext* grammaireParser::ProgrammeContext::varGlobale(size_t i) {
  return getRuleContext<grammaireParser::VarGlobaleContext>(i);
}

std::vector<grammaireParser::DefinitionContext *> grammaireParser::ProgrammeContext::definition() {
  return getRuleContexts<grammaireParser::DefinitionContext>();
}

grammaireParser::DefinitionContext* grammaireParser::ProgrammeContext::definition(size_t i) {
  return getRuleContext<grammaireParser::DefinitionContext>(i);
}


size_t grammaireParser::ProgrammeContext::getRuleIndex() const {
  return grammaireParser::RuleProgramme;
}

antlrcpp::Any grammaireParser::ProgrammeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitProgramme(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::ProgrammeContext* grammaireParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 2, grammaireParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(46);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(43);
        varGlobale(); 
      }
      setState(48);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(50); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(49);
      definition();
      setState(52); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grammaireParser::T__44)
      | (1ULL << grammaireParser::T__45)
      | (1ULL << grammaireParser::T__46)
      | (1ULL << grammaireParser::T__47))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclContext ------------------------------------------------------------------

grammaireParser::InitDeclContext::InitDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::InitDeclContext::getRuleIndex() const {
  return grammaireParser::RuleInitDecl;
}

void grammaireParser::InitDeclContext::copyFrom(InitDeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InitContext ------------------------------------------------------------------

grammaireParser::InitialisationContext* grammaireParser::InitContext::initialisation() {
  return getRuleContext<grammaireParser::InitialisationContext>(0);
}

grammaireParser::InitContext::InitContext(InitDeclContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclContext ------------------------------------------------------------------

grammaireParser::DeclarationContext* grammaireParser::DeclContext::declaration() {
  return getRuleContext<grammaireParser::DeclarationContext>(0);
}

grammaireParser::DeclContext::DeclContext(InitDeclContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::InitDeclContext* grammaireParser::initDecl() {
  InitDeclContext *_localctx = _tracker.createInstance<InitDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, grammaireParser::RuleInitDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<InitDeclContext *>(_tracker.createInstance<grammaireParser::DeclContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(54);
      declaration();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<InitDeclContext *>(_tracker.createInstance<grammaireParser::InitContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(55);
      initialisation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionStructContext ------------------------------------------------------------------

grammaireParser::InstructionStructContext::InstructionStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::InstructionStructContext::getRuleIndex() const {
  return grammaireParser::RuleInstructionStruct;
}

void grammaireParser::InstructionStructContext::copyFrom(InstructionStructContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InstReturnContext ------------------------------------------------------------------

grammaireParser::ExprContext* grammaireParser::InstReturnContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::InstReturnContext::InstReturnContext(InstructionStructContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InstReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInstReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstBreakContext ------------------------------------------------------------------

grammaireParser::InstBreakContext::InstBreakContext(InstructionStructContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InstBreakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInstBreak(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstblocContext ------------------------------------------------------------------

grammaireParser::BlocStructContext* grammaireParser::InstblocContext::blocStruct() {
  return getRuleContext<grammaireParser::BlocStructContext>(0);
}

grammaireParser::InstblocContext::InstblocContext(InstructionStructContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InstblocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInstbloc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstStrucControlContext ------------------------------------------------------------------

grammaireParser::StructureControleContext* grammaireParser::InstStrucControlContext::structureControle() {
  return getRuleContext<grammaireParser::StructureControleContext>(0);
}

grammaireParser::InstStrucControlContext::InstStrucControlContext(InstructionStructContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InstStrucControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInstStrucControl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstExprContext ------------------------------------------------------------------

grammaireParser::ExprContext* grammaireParser::InstExprContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::InstExprContext::InstExprContext(InstructionStructContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InstExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInstExpr(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::InstructionStructContext* grammaireParser::instructionStruct() {
  InstructionStructContext *_localctx = _tracker.createInstance<InstructionStructContext>(_ctx, getState());
  enterRule(_localctx, 6, grammaireParser::RuleInstructionStruct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammaireParser::T__28:
      case grammaireParser::T__29:
      case grammaireParser::T__39:
      case grammaireParser::T__40:
      case grammaireParser::NAME:
      case grammaireParser::VAL:
      case grammaireParser::CHAR: {
        _localctx = dynamic_cast<InstructionStructContext *>(_tracker.createInstance<grammaireParser::InstExprContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(58);
        expr(0);
        setState(59);
        match(grammaireParser::T__0);
        break;
      }

      case grammaireParser::T__8: {
        _localctx = dynamic_cast<InstructionStructContext *>(_tracker.createInstance<grammaireParser::InstblocContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(61);
        blocStruct();
        break;
      }

      case grammaireParser::T__41:
      case grammaireParser::T__42: {
        _localctx = dynamic_cast<InstructionStructContext *>(_tracker.createInstance<grammaireParser::InstStrucControlContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(62);
        structureControle();
        break;
      }

      case grammaireParser::T__1: {
        _localctx = dynamic_cast<InstructionStructContext *>(_tracker.createInstance<grammaireParser::InstBreakContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(63);
        match(grammaireParser::T__1);
        break;
      }

      case grammaireParser::T__2: {
        _localctx = dynamic_cast<InstructionStructContext *>(_tracker.createInstance<grammaireParser::InstReturnContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(64);
        match(grammaireParser::T__2);
        setState(65);
        expr(0);
        setState(66);
        match(grammaireParser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarGlobaleContext ------------------------------------------------------------------

grammaireParser::VarGlobaleContext::VarGlobaleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::VarGlobaleContext::getRuleIndex() const {
  return grammaireParser::RuleVarGlobale;
}

void grammaireParser::VarGlobaleContext::copyFrom(VarGlobaleContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarInitContext ------------------------------------------------------------------

grammaireParser::InitialisationContext* grammaireParser::VarInitContext::initialisation() {
  return getRuleContext<grammaireParser::InitialisationContext>(0);
}

grammaireParser::VarInitContext::VarInitContext(VarGlobaleContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::VarInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitVarInit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclContext ------------------------------------------------------------------

grammaireParser::DeclarationContext* grammaireParser::VarDeclContext::declaration() {
  return getRuleContext<grammaireParser::DeclarationContext>(0);
}

grammaireParser::VarDeclContext::VarDeclContext(VarGlobaleContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::VarGlobaleContext* grammaireParser::varGlobale() {
  VarGlobaleContext *_localctx = _tracker.createInstance<VarGlobaleContext>(_ctx, getState());
  enterRule(_localctx, 8, grammaireParser::RuleVarGlobale);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarGlobaleContext *>(_tracker.createInstance<grammaireParser::VarDeclContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(70);
      declaration();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarGlobaleContext *>(_tracker.createInstance<grammaireParser::VarInitContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(71);
      initialisation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

grammaireParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::DeclarationContext::getRuleIndex() const {
  return grammaireParser::RuleDeclaration;
}

void grammaireParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclConstContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::DeclConstContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::DeclConstContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::DeclConstContext::DeclConstContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::DeclConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitDeclConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclVarContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::DeclVarContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::DeclVarContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::DeclVarContext::DeclVarContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::DeclVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitDeclVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclTabContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::DeclTabContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::DeclTabContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

tree::TerminalNode* grammaireParser::DeclTabContext::VAL() {
  return getToken(grammaireParser::VAL, 0);
}

grammaireParser::DeclTabContext::DeclTabContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::DeclTabContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitDeclTab(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::DeclarationContext* grammaireParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, grammaireParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<grammaireParser::DeclConstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(74);
      match(grammaireParser::T__3);
      setState(75);
      type();
      setState(76);
      match(grammaireParser::NAME);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<grammaireParser::DeclVarContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(78);
      type();
      setState(79);
      match(grammaireParser::NAME);
      setState(80);
      match(grammaireParser::T__0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<grammaireParser::DeclTabContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(82);
      type();
      setState(83);
      match(grammaireParser::NAME);
      setState(84);
      match(grammaireParser::T__4);
      setState(85);
      match(grammaireParser::VAL);
      setState(86);
      match(grammaireParser::T__5);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitialisationContext ------------------------------------------------------------------

grammaireParser::InitialisationContext::InitialisationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::InitialisationContext::getRuleIndex() const {
  return grammaireParser::RuleInitialisation;
}

void grammaireParser::InitialisationContext::copyFrom(InitialisationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InitConstContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::InitConstContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::InitConstContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

tree::TerminalNode* grammaireParser::InitConstContext::VAL() {
  return getToken(grammaireParser::VAL, 0);
}

grammaireParser::InitConstContext::InitConstContext(InitialisationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InitConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitTabContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::InitTabContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::InitTabContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

tree::TerminalNode* grammaireParser::InitTabContext::VAL() {
  return getToken(grammaireParser::VAL, 0);
}

grammaireParser::ParametreAppelContext* grammaireParser::InitTabContext::parametreAppel() {
  return getRuleContext<grammaireParser::ParametreAppelContext>(0);
}

grammaireParser::InitTabContext::InitTabContext(InitialisationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InitTabContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInitTab(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitVarContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::InitVarContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::InitVarContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

tree::TerminalNode* grammaireParser::InitVarContext::VAL() {
  return getToken(grammaireParser::VAL, 0);
}

grammaireParser::InitVarContext::InitVarContext(InitialisationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::InitVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInitVar(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::InitialisationContext* grammaireParser::initialisation() {
  InitialisationContext *_localctx = _tracker.createInstance<InitialisationContext>(_ctx, getState());
  enterRule(_localctx, 12, grammaireParser::RuleInitialisation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<InitialisationContext *>(_tracker.createInstance<grammaireParser::InitTabContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(90);
      type();
      setState(91);
      match(grammaireParser::NAME);
      setState(92);
      match(grammaireParser::T__4);
      setState(93);
      match(grammaireParser::VAL);
      setState(94);
      match(grammaireParser::T__6);
      setState(95);
      match(grammaireParser::T__7);
      setState(96);
      match(grammaireParser::T__8);
      setState(97);
      parametreAppel();
      setState(98);
      match(grammaireParser::T__9);
      setState(99);
      match(grammaireParser::T__0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<InitialisationContext *>(_tracker.createInstance<grammaireParser::InitVarContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(101);
      type();
      setState(102);
      match(grammaireParser::NAME);
      setState(103);
      match(grammaireParser::T__7);
      setState(104);
      match(grammaireParser::VAL);
      setState(105);
      match(grammaireParser::T__0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<InitialisationContext *>(_tracker.createInstance<grammaireParser::InitConstContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(107);
      match(grammaireParser::T__3);
      setState(108);
      type();
      setState(109);
      match(grammaireParser::NAME);
      setState(110);
      match(grammaireParser::T__7);
      setState(111);
      match(grammaireParser::VAL);
      setState(112);
      match(grammaireParser::T__0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

grammaireParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::ExprContext::getRuleIndex() const {
  return grammaireParser::RuleExpr;
}

void grammaireParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprXorBitContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprXorBitContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprXorBitContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprXorBitContext::ExprXorBitContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprXorBitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprXorBit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMultContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprMultContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprMultContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprMultContext::ExprMultContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprMultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprNameContext ------------------------------------------------------------------

tree::TerminalNode* grammaireParser::ExprNameContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ExprNameContext::ExprNameContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprNoBitContext ------------------------------------------------------------------

grammaireParser::ExprContext* grammaireParser::ExprNoBitContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::ExprNoBitContext::ExprNoBitContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprNoBitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprNoBit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprCharContext ------------------------------------------------------------------

tree::TerminalNode* grammaireParser::ExprCharContext::CHAR() {
  return getToken(grammaireParser::CHAR, 0);
}

grammaireParser::ExprCharContext::ExprCharContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprCharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprSupOrEqualContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprSupOrEqualContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprSupOrEqualContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprSupOrEqualContext::ExprSupOrEqualContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprSupOrEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprSupOrEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAffectContext ------------------------------------------------------------------

grammaireParser::AffectationContext* grammaireParser::ExprAffectContext::affectation() {
  return getRuleContext<grammaireParser::AffectationContext>(0);
}

grammaireParser::ExprAffectContext::ExprAffectContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprAffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprAffect(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprSupContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprSupContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprSupContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprSupContext::ExprSupContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprSupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprSup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprInfOrEqualContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprInfOrEqualContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprInfOrEqualContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprInfOrEqualContext::ExprInfOrEqualContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprInfOrEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprInfOrEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprFnctContext ------------------------------------------------------------------

tree::TerminalNode* grammaireParser::ExprFnctContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ParametreAppelContext* grammaireParser::ExprFnctContext::parametreAppel() {
  return getRuleContext<grammaireParser::ParametreAppelContext>(0);
}

grammaireParser::ExprFnctContext::ExprFnctContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprFnctContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprFnct(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprDivContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprDivContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprDivContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprDivContext::ExprDivContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAndContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprAndContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprAndContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprAndContext::ExprAndContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprTabContext ------------------------------------------------------------------

tree::TerminalNode* grammaireParser::ExprTabContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ExprContext* grammaireParser::ExprTabContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::ExprTabContext::ExprTabContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprTabContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprTab(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprOrContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprOrContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprOrContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprOrContext::ExprOrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprNoContext ------------------------------------------------------------------

grammaireParser::ExprContext* grammaireParser::ExprNoContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::ExprNoContext::ExprNoContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprNoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprNo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprDiffContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprDiffContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprDiffContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprDiffContext::ExprDiffContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprDiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprDiff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprSubContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprSubContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprSubContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprSubContext::ExprSubContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAndBitContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprAndBitContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprAndBitContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprAndBitContext::ExprAndBitContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprAndBitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprAndBit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprOrBitContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprOrBitContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprOrBitContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprOrBitContext::ExprOrBitContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprOrBitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprOrBit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprEqualContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprEqualContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprEqualContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprEqualContext::ExprEqualContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprValContext ------------------------------------------------------------------

tree::TerminalNode* grammaireParser::ExprValContext::VAL() {
  return getToken(grammaireParser::VAL, 0);
}

grammaireParser::ExprValContext::ExprValContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAddContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprAddContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprAddContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprAddContext::ExprAddContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprAddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprInfContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprInfContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprInfContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprInfContext::ExprInfContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprInfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprInf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprModContext ------------------------------------------------------------------

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprModContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprModContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ExprModContext::ExprModContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ExprModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExprMod(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::ExprContext* grammaireParser::expr() {
   return expr(0);
}

grammaireParser::ExprContext* grammaireParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  grammaireParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  grammaireParser::ExprContext *previousContext = _localctx;
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, grammaireParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ExprAffectContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(117);
      affectation();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ExprNameContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(118);
      match(grammaireParser::NAME);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExprValContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(119);
      match(grammaireParser::VAL);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ExprCharContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(120);
      match(grammaireParser::CHAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ExprTabContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(121);
      match(grammaireParser::NAME);
      setState(122);
      match(grammaireParser::T__4);
      setState(123);
      expr(0);
      setState(124);
      match(grammaireParser::T__6);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExprFnctContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(126);
      match(grammaireParser::NAME);
      setState(127);
      match(grammaireParser::T__10);
      setState(128);
      parametreAppel();
      setState(129);
      match(grammaireParser::T__11);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ExprNoBitContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(131);
      match(grammaireParser::T__28);
      setState(132);
      expr(2);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ExprNoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(133);
      match(grammaireParser::T__29);
      setState(134);
      expr(1);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(187);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(185);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExprAddContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(137);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(138);
          match(grammaireParser::T__12);
          setState(139);
          expr(19);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExprSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(140);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(141);
          match(grammaireParser::T__13);
          setState(142);
          expr(18);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExprMultContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(143);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(144);
          match(grammaireParser::T__14);
          setState(145);
          expr(17);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ExprDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(146);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(147);
          match(grammaireParser::T__15);
          setState(148);
          expr(16);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ExprModContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(149);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(150);
          match(grammaireParser::T__16);
          setState(151);
          expr(15);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ExprDiffContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(152);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(153);
          match(grammaireParser::T__17);
          setState(154);
          expr(14);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<ExprEqualContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(155);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(156);
          match(grammaireParser::T__18);
          setState(157);
          expr(13);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ExprSupContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(158);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(159);
          match(grammaireParser::T__19);
          setState(160);
          expr(12);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<ExprInfContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(161);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(162);
          match(grammaireParser::T__20);
          setState(163);
          expr(11);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<ExprSupOrEqualContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(164);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(165);
          match(grammaireParser::T__21);
          setState(166);
          expr(10);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<ExprInfOrEqualContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(167);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(168);
          match(grammaireParser::T__22);
          setState(169);
          expr(9);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<ExprAndBitContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(170);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(171);
          match(grammaireParser::T__23);
          setState(172);
          expr(8);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<ExprAndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(173);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(174);
          match(grammaireParser::T__24);
          setState(175);
          expr(7);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<ExprOrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(176);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(177);
          match(grammaireParser::T__25);
          setState(178);
          expr(6);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<ExprOrBitContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(179);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(180);
          match(grammaireParser::T__26);
          setState(181);
          expr(5);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<ExprXorBitContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(182);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(183);
          match(grammaireParser::T__27);
          setState(184);
          expr(4);
          break;
        }

        } 
      }
      setState(189);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametreAppelContext ------------------------------------------------------------------

grammaireParser::ParametreAppelContext::ParametreAppelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<grammaireParser::ExprContext *> grammaireParser::ParametreAppelContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ParametreAppelContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}


size_t grammaireParser::ParametreAppelContext::getRuleIndex() const {
  return grammaireParser::RuleParametreAppel;
}

antlrcpp::Any grammaireParser::ParametreAppelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitParametreAppel(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::ParametreAppelContext* grammaireParser::parametreAppel() {
  ParametreAppelContext *_localctx = _tracker.createInstance<ParametreAppelContext>(_ctx, getState());
  enterRule(_localctx, 16, grammaireParser::RuleParametreAppel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(195);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(190);
        expr(0);
        setState(191);
        match(grammaireParser::T__30); 
      }
      setState(197);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(198);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectationContext ------------------------------------------------------------------

grammaireParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::AffectationContext::getRuleIndex() const {
  return grammaireParser::RuleAffectation;
}

void grammaireParser::AffectationContext::copyFrom(AffectationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AffectMinusEqualContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectMinusEqualContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectMinusEqualContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectMinusEqualContext::AffectMinusEqualContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectMinusEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectMinusEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectBitwiseAndContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectBitwiseAndContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectBitwiseAndContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectBitwiseAndContext::AffectBitwiseAndContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectBitwiseAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectBitwiseAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectBitwiseRightShiftContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectBitwiseRightShiftContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectBitwiseRightShiftContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectBitwiseRightShiftContext::AffectBitwiseRightShiftContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectBitwiseRightShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectBitwiseRightShift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectMultEqualContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectMultEqualContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectMultEqualContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectMultEqualContext::AffectMultEqualContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectMultEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectMultEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectDivisionContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectDivisionContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectDivisionContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectDivisionContext::AffectDivisionContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectDivisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectDivision(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectBitwiseOrContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectBitwiseOrContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectBitwiseOrContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectBitwiseOrContext::AffectBitwiseOrContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectBitwiseOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectBitwiseOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectBitwiseXorContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectBitwiseXorContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectBitwiseXorContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectBitwiseXorContext::AffectBitwiseXorContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectBitwiseXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectBitwiseXor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectDecrementationBeforeContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectDecrementationBeforeContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::AffectDecrementationBeforeContext::AffectDecrementationBeforeContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectDecrementationBeforeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectDecrementationBefore(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectEqualContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectEqualContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectEqualContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectEqualContext::AffectEqualContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectPlusEqualContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectPlusEqualContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectPlusEqualContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::AffectPlusEqualContext::AffectPlusEqualContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectPlusEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectPlusEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectIncrementationAfterContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectIncrementationAfterContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::AffectIncrementationAfterContext::AffectIncrementationAfterContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectIncrementationAfterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectIncrementationAfter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectIncrementationBeforeContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectIncrementationBeforeContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::AffectIncrementationBeforeContext::AffectIncrementationBeforeContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectIncrementationBeforeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectIncrementationBefore(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectDecrementationAfterContext ------------------------------------------------------------------

grammaireParser::LeftValueContext* grammaireParser::AffectDecrementationAfterContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::AffectDecrementationAfterContext::AffectDecrementationAfterContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::AffectDecrementationAfterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectDecrementationAfter(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::AffectationContext* grammaireParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 18, grammaireParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectEqualContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(200);
      leftValue();
      setState(201);
      match(grammaireParser::T__7);
      setState(202);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectPlusEqualContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(204);
      leftValue();
      setState(205);
      match(grammaireParser::T__31);
      setState(206);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectMinusEqualContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(208);
      leftValue();
      setState(209);
      match(grammaireParser::T__32);
      setState(210);
      expr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectMultEqualContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(212);
      leftValue();
      setState(213);
      match(grammaireParser::T__33);
      setState(214);
      expr(0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectDivisionContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(216);
      leftValue();
      setState(217);
      match(grammaireParser::T__34);
      setState(218);
      expr(0);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectBitwiseAndContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(220);
      leftValue();
      setState(221);
      match(grammaireParser::T__35);
      setState(222);
      expr(0);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectBitwiseOrContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(224);
      leftValue();
      setState(225);
      match(grammaireParser::T__36);
      setState(226);
      expr(0);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectBitwiseXorContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(228);
      leftValue();
      setState(229);
      match(grammaireParser::T__37);
      setState(230);
      expr(0);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectBitwiseRightShiftContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(232);
      leftValue();
      setState(233);
      match(grammaireParser::T__38);
      setState(234);
      expr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectIncrementationBeforeContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(236);
      match(grammaireParser::T__39);
      setState(237);
      leftValue();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectDecrementationBeforeContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(238);
      match(grammaireParser::T__40);
      setState(239);
      leftValue();
      break;
    }

    case 12: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectIncrementationAfterContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(240);
      leftValue();
      setState(241);
      match(grammaireParser::T__39);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<grammaireParser::AffectDecrementationAfterContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(243);
      leftValue();
      setState(244);
      match(grammaireParser::T__40);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftValueContext ------------------------------------------------------------------

grammaireParser::LeftValueContext::LeftValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::LeftValueContext::getRuleIndex() const {
  return grammaireParser::RuleLeftValue;
}

void grammaireParser::LeftValueContext::copyFrom(LeftValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LeftValueTabContext ------------------------------------------------------------------

tree::TerminalNode* grammaireParser::LeftValueTabContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ExprContext* grammaireParser::LeftValueTabContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::LeftValueTabContext::LeftValueTabContext(LeftValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::LeftValueTabContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitLeftValueTab(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LeftValueVarContext ------------------------------------------------------------------

tree::TerminalNode* grammaireParser::LeftValueVarContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::LeftValueVarContext::LeftValueVarContext(LeftValueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::LeftValueVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitLeftValueVar(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::LeftValueContext* grammaireParser::leftValue() {
  LeftValueContext *_localctx = _tracker.createInstance<LeftValueContext>(_ctx, getState());
  enterRule(_localctx, 20, grammaireParser::RuleLeftValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LeftValueContext *>(_tracker.createInstance<grammaireParser::LeftValueVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(248);
      match(grammaireParser::NAME);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LeftValueContext *>(_tracker.createInstance<grammaireParser::LeftValueTabContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(249);
      match(grammaireParser::NAME);
      setState(250);
      match(grammaireParser::T__4);
      setState(251);
      expr(0);
      setState(252);
      match(grammaireParser::T__6);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

grammaireParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::DefinitionContext::getRuleIndex() const {
  return grammaireParser::RuleDefinition;
}

void grammaireParser::DefinitionContext::copyFrom(DefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefFnctContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::DefFnctContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::DefFnctContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ParametreDefinitionContext* grammaireParser::DefFnctContext::parametreDefinition() {
  return getRuleContext<grammaireParser::ParametreDefinitionContext>(0);
}

grammaireParser::BlocContext* grammaireParser::DefFnctContext::bloc() {
  return getRuleContext<grammaireParser::BlocContext>(0);
}

grammaireParser::DefFnctContext::DefFnctContext(DefinitionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::DefFnctContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitDefFnct(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefProcContext ------------------------------------------------------------------

grammaireParser::Type_voidContext* grammaireParser::DefProcContext::type_void() {
  return getRuleContext<grammaireParser::Type_voidContext>(0);
}

tree::TerminalNode* grammaireParser::DefProcContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ParametreDefinitionContext* grammaireParser::DefProcContext::parametreDefinition() {
  return getRuleContext<grammaireParser::ParametreDefinitionContext>(0);
}

grammaireParser::BlocContext* grammaireParser::DefProcContext::bloc() {
  return getRuleContext<grammaireParser::BlocContext>(0);
}

grammaireParser::DefProcContext::DefProcContext(DefinitionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::DefProcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitDefProc(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::DefinitionContext* grammaireParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, grammaireParser::RuleDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(270);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammaireParser::T__44:
      case grammaireParser::T__45:
      case grammaireParser::T__46: {
        _localctx = dynamic_cast<DefinitionContext *>(_tracker.createInstance<grammaireParser::DefFnctContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(256);
        type();
        setState(257);
        match(grammaireParser::NAME);
        setState(258);
        match(grammaireParser::T__10);
        setState(259);
        parametreDefinition();
        setState(260);
        match(grammaireParser::T__11);
        setState(261);
        bloc();
        break;
      }

      case grammaireParser::T__47: {
        _localctx = dynamic_cast<DefinitionContext *>(_tracker.createInstance<grammaireParser::DefProcContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(263);
        type_void();
        setState(264);
        match(grammaireParser::NAME);
        setState(265);
        match(grammaireParser::T__10);
        setState(266);
        parametreDefinition();
        setState(267);
        match(grammaireParser::T__11);
        setState(268);
        bloc();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocContext ------------------------------------------------------------------

grammaireParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<grammaireParser::InitDeclContext *> grammaireParser::BlocContext::initDecl() {
  return getRuleContexts<grammaireParser::InitDeclContext>();
}

grammaireParser::InitDeclContext* grammaireParser::BlocContext::initDecl(size_t i) {
  return getRuleContext<grammaireParser::InitDeclContext>(i);
}

std::vector<grammaireParser::InstructionStructContext *> grammaireParser::BlocContext::instructionStruct() {
  return getRuleContexts<grammaireParser::InstructionStructContext>();
}

grammaireParser::InstructionStructContext* grammaireParser::BlocContext::instructionStruct(size_t i) {
  return getRuleContext<grammaireParser::InstructionStructContext>(i);
}


size_t grammaireParser::BlocContext::getRuleIndex() const {
  return grammaireParser::RuleBloc;
}

antlrcpp::Any grammaireParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::BlocContext* grammaireParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 24, grammaireParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(grammaireParser::T__8);
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grammaireParser::T__3)
      | (1ULL << grammaireParser::T__44)
      | (1ULL << grammaireParser::T__45)
      | (1ULL << grammaireParser::T__46))) != 0)) {
      setState(273);
      initDecl();
      setState(278);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grammaireParser::T__1)
      | (1ULL << grammaireParser::T__2)
      | (1ULL << grammaireParser::T__8)
      | (1ULL << grammaireParser::T__28)
      | (1ULL << grammaireParser::T__29)
      | (1ULL << grammaireParser::T__39)
      | (1ULL << grammaireParser::T__40)
      | (1ULL << grammaireParser::T__41)
      | (1ULL << grammaireParser::T__42)
      | (1ULL << grammaireParser::NAME)
      | (1ULL << grammaireParser::VAL)
      | (1ULL << grammaireParser::CHAR))) != 0)) {
      setState(279);
      instructionStruct();
      setState(284);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(285);
    match(grammaireParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocStructContext ------------------------------------------------------------------

grammaireParser::BlocStructContext::BlocStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<grammaireParser::InstructionStructContext *> grammaireParser::BlocStructContext::instructionStruct() {
  return getRuleContexts<grammaireParser::InstructionStructContext>();
}

grammaireParser::InstructionStructContext* grammaireParser::BlocStructContext::instructionStruct(size_t i) {
  return getRuleContext<grammaireParser::InstructionStructContext>(i);
}


size_t grammaireParser::BlocStructContext::getRuleIndex() const {
  return grammaireParser::RuleBlocStruct;
}

antlrcpp::Any grammaireParser::BlocStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitBlocStruct(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::BlocStructContext* grammaireParser::blocStruct() {
  BlocStructContext *_localctx = _tracker.createInstance<BlocStructContext>(_ctx, getState());
  enterRule(_localctx, 26, grammaireParser::RuleBlocStruct);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    match(grammaireParser::T__8);
    setState(291);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grammaireParser::T__1)
      | (1ULL << grammaireParser::T__2)
      | (1ULL << grammaireParser::T__8)
      | (1ULL << grammaireParser::T__28)
      | (1ULL << grammaireParser::T__29)
      | (1ULL << grammaireParser::T__39)
      | (1ULL << grammaireParser::T__40)
      | (1ULL << grammaireParser::T__41)
      | (1ULL << grammaireParser::T__42)
      | (1ULL << grammaireParser::NAME)
      | (1ULL << grammaireParser::VAL)
      | (1ULL << grammaireParser::CHAR))) != 0)) {
      setState(288);
      instructionStruct();
      setState(293);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(294);
    match(grammaireParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametreDefinitionContext ------------------------------------------------------------------

grammaireParser::ParametreDefinitionContext::ParametreDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::ParametreDefinitionContext::getRuleIndex() const {
  return grammaireParser::RuleParametreDefinition;
}

void grammaireParser::ParametreDefinitionContext::copyFrom(ParametreDefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParamDefinitionVideContext ------------------------------------------------------------------

grammaireParser::Type_voidContext* grammaireParser::ParamDefinitionVideContext::type_void() {
  return getRuleContext<grammaireParser::Type_voidContext>(0);
}

grammaireParser::ParamDefinitionVideContext::ParamDefinitionVideContext(ParametreDefinitionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ParamDefinitionVideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitParamDefinitionVide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParamDefinitionNonVideContext ------------------------------------------------------------------

std::vector<grammaireParser::ParametreContext *> grammaireParser::ParamDefinitionNonVideContext::parametre() {
  return getRuleContexts<grammaireParser::ParametreContext>();
}

grammaireParser::ParametreContext* grammaireParser::ParamDefinitionNonVideContext::parametre(size_t i) {
  return getRuleContext<grammaireParser::ParametreContext>(i);
}

grammaireParser::ParamDefinitionNonVideContext::ParamDefinitionNonVideContext(ParametreDefinitionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ParamDefinitionNonVideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitParamDefinitionNonVide(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::ParametreDefinitionContext* grammaireParser::parametreDefinition() {
  ParametreDefinitionContext *_localctx = _tracker.createInstance<ParametreDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 28, grammaireParser::RuleParametreDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(305);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammaireParser::T__44:
      case grammaireParser::T__45:
      case grammaireParser::T__46: {
        _localctx = dynamic_cast<ParametreDefinitionContext *>(_tracker.createInstance<grammaireParser::ParamDefinitionNonVideContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(296);
        parametre();
        setState(301);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == grammaireParser::T__30) {
          setState(297);
          match(grammaireParser::T__30);
          setState(298);
          parametre();
          setState(303);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case grammaireParser::T__47: {
        _localctx = dynamic_cast<ParametreDefinitionContext *>(_tracker.createInstance<grammaireParser::ParamDefinitionVideContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(304);
        type_void();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametreContext ------------------------------------------------------------------

grammaireParser::ParametreContext::ParametreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::ParametreContext::getRuleIndex() const {
  return grammaireParser::RuleParametre;
}

void grammaireParser::ParametreContext::copyFrom(ParametreContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParametreSimpleContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::ParametreSimpleContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::ParametreSimpleContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ParametreSimpleContext::ParametreSimpleContext(ParametreContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ParametreSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitParametreSimple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParametreTabContext ------------------------------------------------------------------

grammaireParser::TypeContext* grammaireParser::ParametreTabContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::ParametreTabContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ParametreTabContext::ParametreTabContext(ParametreContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::ParametreTabContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitParametreTab(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::ParametreContext* grammaireParser::parametre() {
  ParametreContext *_localctx = _tracker.createInstance<ParametreContext>(_ctx, getState());
  enterRule(_localctx, 30, grammaireParser::RuleParametre);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(315);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ParametreContext *>(_tracker.createInstance<grammaireParser::ParametreSimpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(307);
      type();
      setState(308);
      match(grammaireParser::NAME);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ParametreContext *>(_tracker.createInstance<grammaireParser::ParametreTabContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(310);
      type();
      setState(311);
      match(grammaireParser::NAME);
      setState(312);
      match(grammaireParser::T__4);
      setState(313);
      match(grammaireParser::T__6);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureControleContext ------------------------------------------------------------------

grammaireParser::StructureControleContext::StructureControleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::StructureControleContext::getRuleIndex() const {
  return grammaireParser::RuleStructureControle;
}

void grammaireParser::StructureControleContext::copyFrom(StructureControleContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileContext ------------------------------------------------------------------

grammaireParser::ExprContext* grammaireParser::WhileContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::BlocStructContext* grammaireParser::WhileContext::blocStruct() {
  return getRuleContext<grammaireParser::BlocStructContext>(0);
}

grammaireParser::WhileContext::WhileContext(StructureControleContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfContext ------------------------------------------------------------------

grammaireParser::ExprContext* grammaireParser::IfContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::BlocStructContext* grammaireParser::IfContext::blocStruct() {
  return getRuleContext<grammaireParser::BlocStructContext>(0);
}

grammaireParser::ElseBlocContext* grammaireParser::IfContext::elseBloc() {
  return getRuleContext<grammaireParser::ElseBlocContext>(0);
}

grammaireParser::IfContext::IfContext(StructureControleContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::StructureControleContext* grammaireParser::structureControle() {
  StructureControleContext *_localctx = _tracker.createInstance<StructureControleContext>(_ctx, getState());
  enterRule(_localctx, 32, grammaireParser::RuleStructureControle);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(331);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammaireParser::T__41: {
        _localctx = dynamic_cast<StructureControleContext *>(_tracker.createInstance<grammaireParser::IfContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(317);
        match(grammaireParser::T__41);
        setState(318);
        match(grammaireParser::T__10);
        setState(319);
        expr(0);
        setState(320);
        match(grammaireParser::T__11);
        setState(321);
        blocStruct();
        setState(323);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == grammaireParser::T__43) {
          setState(322);
          elseBloc();
        }
        break;
      }

      case grammaireParser::T__42: {
        _localctx = dynamic_cast<StructureControleContext *>(_tracker.createInstance<grammaireParser::WhileContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(325);
        match(grammaireParser::T__42);
        setState(326);
        match(grammaireParser::T__10);
        setState(327);
        expr(0);
        setState(328);
        match(grammaireParser::T__11);
        setState(329);
        blocStruct();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseBlocContext ------------------------------------------------------------------

grammaireParser::ElseBlocContext::ElseBlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grammaireParser::BlocStructContext* grammaireParser::ElseBlocContext::blocStruct() {
  return getRuleContext<grammaireParser::BlocStructContext>(0);
}


size_t grammaireParser::ElseBlocContext::getRuleIndex() const {
  return grammaireParser::RuleElseBloc;
}

antlrcpp::Any grammaireParser::ElseBlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitElseBloc(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::ElseBlocContext* grammaireParser::elseBloc() {
  ElseBlocContext *_localctx = _tracker.createInstance<ElseBlocContext>(_ctx, getState());
  enterRule(_localctx, 34, grammaireParser::RuleElseBloc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    match(grammaireParser::T__43);
    setState(334);
    blocStruct();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

grammaireParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::TypeContext::getRuleIndex() const {
  return grammaireParser::RuleType;
}

void grammaireParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Int64Context ------------------------------------------------------------------

grammaireParser::Int64Context::Int64Context(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::Int64Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInt64(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int32Context ------------------------------------------------------------------

grammaireParser::Int32Context::Int32Context(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::Int32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInt32(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharContext ------------------------------------------------------------------

grammaireParser::CharContext::CharContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any grammaireParser::CharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitChar(this);
  else
    return visitor->visitChildren(this);
}
grammaireParser::TypeContext* grammaireParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 36, grammaireParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammaireParser::T__44: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<grammaireParser::Int32Context>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(336);
        match(grammaireParser::T__44);
        break;
      }

      case grammaireParser::T__45: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<grammaireParser::Int64Context>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(337);
        match(grammaireParser::T__45);
        break;
      }

      case grammaireParser::T__46: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<grammaireParser::CharContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(338);
        match(grammaireParser::T__46);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_voidContext ------------------------------------------------------------------

grammaireParser::Type_voidContext::Type_voidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t grammaireParser::Type_voidContext::getRuleIndex() const {
  return grammaireParser::RuleType_void;
}

antlrcpp::Any grammaireParser::Type_voidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitType_void(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::Type_voidContext* grammaireParser::type_void() {
  Type_voidContext *_localctx = _tracker.createInstance<Type_voidContext>(_ctx, getState());
  enterRule(_localctx, 38, grammaireParser::RuleType_void);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(grammaireParser::T__47);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool grammaireParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool grammaireParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 18);
    case 1: return precpred(_ctx, 17);
    case 2: return precpred(_ctx, 16);
    case 3: return precpred(_ctx, 15);
    case 4: return precpred(_ctx, 14);
    case 5: return precpred(_ctx, 13);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);
    case 9: return precpred(_ctx, 9);
    case 10: return precpred(_ctx, 8);
    case 11: return precpred(_ctx, 7);
    case 12: return precpred(_ctx, 6);
    case 13: return precpred(_ctx, 5);
    case 14: return precpred(_ctx, 4);
    case 15: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> grammaireParser::_decisionToDFA;
atn::PredictionContextCache grammaireParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN grammaireParser::_atn;
std::vector<uint16_t> grammaireParser::_serializedATN;

std::vector<std::string> grammaireParser::_ruleNames = {
  "entree", "programme", "initDecl", "instructionStruct", "varGlobale", 
  "declaration", "initialisation", "expr", "parametreAppel", "affectation", 
  "leftValue", "definition", "bloc", "blocStruct", "parametreDefinition", 
  "parametre", "structureControle", "elseBloc", "type", "type_void"
};

std::vector<std::string> grammaireParser::_literalNames = {
  "", "';'", "'break;'", "'return'", "'const'", "'['", "'];'", "']'", "'='", 
  "'{'", "'}'", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!='", 
  "'=='", "'>'", "'<'", "'>='", "'<='", "'&'", "'&&'", "'||'", "'|'", "'^'", 
  "'~'", "'!'", "','", "'+='", "'-='", "'*='", "'/='", "'&='", "'|='", "'^='", 
  "'>>='", "'++'", "'--'", "'if'", "'while'", "'else'", "'int32_t'", "'int64_t'", 
  "'char'", "'void'"
};

std::vector<std::string> grammaireParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "NAME", "VAL", "COMMENTAIRE", 
  "CHAR", "WS"
};

dfa::Vocabulary grammaireParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> grammaireParser::_tokenNames;

grammaireParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x37, 0x15a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x2f, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x32, 0xb, 0x3, 0x3, 0x3, 0x6, 0x3, 0x35, 0xa, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0x36, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3b, 0xa, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x47, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x4b, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x5b, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x75, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x8a, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xbc, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0xbf, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0xc4, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xc7, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xf9, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x101, 
    0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0x111, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x115, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x118, 0xb, 0xe, 0x3, 0xe, 0x7, 0xe, 0x11b, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x11e, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0x124, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x127, 
    0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 
    0x10, 0x12e, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x131, 0xb, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0x134, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x13e, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0x146, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x14e, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x156, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x2, 0x3, 0x10, 0x16, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x2, 0x2, 0x181, 0x2, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x30, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x46, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x5a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x74, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x12, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x14, 0xf8, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x100, 0x3, 0x2, 0x2, 0x2, 0x18, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x112, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x133, 0x3, 0x2, 0x2, 0x2, 0x20, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x24, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x155, 0x3, 0x2, 0x2, 0x2, 0x28, 0x157, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x2b, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2c, 0x7, 0x2, 0x2, 0x3, 0x2c, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x2f, 0x5, 0xa, 0x6, 0x2, 0x2e, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x32, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x33, 0x35, 0x5, 0x18, 0xd, 0x2, 
    0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x5, 0xc, 0x7, 0x2, 0x39, 0x3b, 0x5, 
    0xe, 0x8, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x10, 0x9, 
    0x2, 0x3d, 0x3e, 0x7, 0x3, 0x2, 0x2, 0x3e, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x47, 0x5, 0x1c, 0xf, 0x2, 0x40, 0x47, 0x5, 0x22, 0x12, 0x2, 0x41, 
    0x47, 0x7, 0x4, 0x2, 0x2, 0x42, 0x43, 0x7, 0x5, 0x2, 0x2, 0x43, 0x44, 
    0x5, 0x10, 0x9, 0x2, 0x44, 0x45, 0x7, 0x3, 0x2, 0x2, 0x45, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x46, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x40, 0x3, 0x2, 0x2, 0x2, 0x46, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x42, 0x3, 0x2, 0x2, 0x2, 0x47, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x4b, 0x5, 0xc, 0x7, 0x2, 0x49, 0x4b, 0x5, 0xe, 0x8, 0x2, 0x4a, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x6, 0x2, 0x2, 0x4d, 0x4e, 0x5, 
    0x26, 0x14, 0x2, 0x4e, 0x4f, 0x7, 0x33, 0x2, 0x2, 0x4f, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x51, 0x5, 0x26, 0x14, 0x2, 0x51, 0x52, 0x7, 0x33, 0x2, 
    0x2, 0x52, 0x53, 0x7, 0x3, 0x2, 0x2, 0x53, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x55, 0x5, 0x26, 0x14, 0x2, 0x55, 0x56, 0x7, 0x33, 0x2, 0x2, 0x56, 
    0x57, 0x7, 0x7, 0x2, 0x2, 0x57, 0x58, 0x7, 0x34, 0x2, 0x2, 0x58, 0x59, 
    0x7, 0x8, 0x2, 0x2, 0x59, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x50, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x5b, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x26, 0x14, 
    0x2, 0x5d, 0x5e, 0x7, 0x33, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x7, 0x2, 0x2, 
    0x5f, 0x60, 0x7, 0x34, 0x2, 0x2, 0x60, 0x61, 0x7, 0x9, 0x2, 0x2, 0x61, 
    0x62, 0x7, 0xa, 0x2, 0x2, 0x62, 0x63, 0x7, 0xb, 0x2, 0x2, 0x63, 0x64, 
    0x5, 0x12, 0xa, 0x2, 0x64, 0x65, 0x7, 0xc, 0x2, 0x2, 0x65, 0x66, 0x7, 
    0x3, 0x2, 0x2, 0x66, 0x75, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x5, 0x26, 
    0x14, 0x2, 0x68, 0x69, 0x7, 0x33, 0x2, 0x2, 0x69, 0x6a, 0x7, 0xa, 0x2, 
    0x2, 0x6a, 0x6b, 0x7, 0x34, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x3, 0x2, 0x2, 
    0x6c, 0x75, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x6, 0x2, 0x2, 0x6e, 
    0x6f, 0x5, 0x26, 0x14, 0x2, 0x6f, 0x70, 0x7, 0x33, 0x2, 0x2, 0x70, 0x71, 
    0x7, 0xa, 0x2, 0x2, 0x71, 0x72, 0x7, 0x34, 0x2, 0x2, 0x72, 0x73, 0x7, 
    0x3, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 0x74, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x67, 0x3, 0x2, 0x2, 0x2, 0x74, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0xf, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x8, 0x9, 0x1, 0x2, 
    0x77, 0x8a, 0x5, 0x14, 0xb, 0x2, 0x78, 0x8a, 0x7, 0x33, 0x2, 0x2, 0x79, 
    0x8a, 0x7, 0x34, 0x2, 0x2, 0x7a, 0x8a, 0x7, 0x36, 0x2, 0x2, 0x7b, 0x7c, 
    0x7, 0x33, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x7, 0x2, 0x2, 0x7d, 0x7e, 0x5, 
    0x10, 0x9, 0x2, 0x7e, 0x7f, 0x7, 0x9, 0x2, 0x2, 0x7f, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0x7, 0x33, 0x2, 0x2, 0x81, 0x82, 0x7, 0xd, 0x2, 
    0x2, 0x82, 0x83, 0x5, 0x12, 0xa, 0x2, 0x83, 0x84, 0x7, 0xe, 0x2, 0x2, 
    0x84, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x1f, 0x2, 0x2, 0x86, 
    0x8a, 0x5, 0x10, 0x9, 0x4, 0x87, 0x88, 0x7, 0x20, 0x2, 0x2, 0x88, 0x8a, 
    0x5, 0x10, 0x9, 0x3, 0x89, 0x76, 0x3, 0x2, 0x2, 0x2, 0x89, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x79, 0x3, 0x2, 0x2, 0x2, 0x89, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x89, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x85, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0xc, 0x14, 0x2, 0x2, 0x8c, 
    0x8d, 0x7, 0xf, 0x2, 0x2, 0x8d, 0xbc, 0x5, 0x10, 0x9, 0x15, 0x8e, 0x8f, 
    0xc, 0x13, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x10, 0x2, 0x2, 0x90, 0xbc, 0x5, 
    0x10, 0x9, 0x14, 0x91, 0x92, 0xc, 0x12, 0x2, 0x2, 0x92, 0x93, 0x7, 0x11, 
    0x2, 0x2, 0x93, 0xbc, 0x5, 0x10, 0x9, 0x13, 0x94, 0x95, 0xc, 0x11, 0x2, 
    0x2, 0x95, 0x96, 0x7, 0x12, 0x2, 0x2, 0x96, 0xbc, 0x5, 0x10, 0x9, 0x12, 
    0x97, 0x98, 0xc, 0x10, 0x2, 0x2, 0x98, 0x99, 0x7, 0x13, 0x2, 0x2, 0x99, 
    0xbc, 0x5, 0x10, 0x9, 0x11, 0x9a, 0x9b, 0xc, 0xf, 0x2, 0x2, 0x9b, 0x9c, 
    0x7, 0x14, 0x2, 0x2, 0x9c, 0xbc, 0x5, 0x10, 0x9, 0x10, 0x9d, 0x9e, 0xc, 
    0xe, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x15, 0x2, 0x2, 0x9f, 0xbc, 0x5, 0x10, 
    0x9, 0xf, 0xa0, 0xa1, 0xc, 0xd, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x16, 0x2, 
    0x2, 0xa2, 0xbc, 0x5, 0x10, 0x9, 0xe, 0xa3, 0xa4, 0xc, 0xc, 0x2, 0x2, 
    0xa4, 0xa5, 0x7, 0x17, 0x2, 0x2, 0xa5, 0xbc, 0x5, 0x10, 0x9, 0xd, 0xa6, 
    0xa7, 0xc, 0xb, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x18, 0x2, 0x2, 0xa8, 0xbc, 
    0x5, 0x10, 0x9, 0xc, 0xa9, 0xaa, 0xc, 0xa, 0x2, 0x2, 0xaa, 0xab, 0x7, 
    0x19, 0x2, 0x2, 0xab, 0xbc, 0x5, 0x10, 0x9, 0xb, 0xac, 0xad, 0xc, 0x9, 
    0x2, 0x2, 0xad, 0xae, 0x7, 0x1a, 0x2, 0x2, 0xae, 0xbc, 0x5, 0x10, 0x9, 
    0xa, 0xaf, 0xb0, 0xc, 0x8, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x1b, 0x2, 0x2, 
    0xb1, 0xbc, 0x5, 0x10, 0x9, 0x9, 0xb2, 0xb3, 0xc, 0x7, 0x2, 0x2, 0xb3, 
    0xb4, 0x7, 0x1c, 0x2, 0x2, 0xb4, 0xbc, 0x5, 0x10, 0x9, 0x8, 0xb5, 0xb6, 
    0xc, 0x6, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x1d, 0x2, 0x2, 0xb7, 0xbc, 0x5, 
    0x10, 0x9, 0x7, 0xb8, 0xb9, 0xc, 0x5, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x1e, 
    0x2, 0x2, 0xba, 0xbc, 0x5, 0x10, 0x9, 0x6, 0xbb, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xbb, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0x94, 0x3, 0x2, 0x2, 0x2, 0xbb, 0x97, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0xbb, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0xbb, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb2, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x11, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x10, 0x9, 0x2, 0xc1, 0xc2, 0x7, 
    0x21, 0x2, 0x2, 0xc2, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x10, 0x9, 0x2, 0xc9, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x16, 0xc, 0x2, 0xcb, 0xcc, 
    0x7, 0xa, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x10, 0x9, 0x2, 0xcd, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x16, 0xc, 0x2, 0xcf, 0xd0, 0x7, 0x22, 
    0x2, 0x2, 0xd0, 0xd1, 0x5, 0x10, 0x9, 0x2, 0xd1, 0xf9, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd3, 0x5, 0x16, 0xc, 0x2, 0xd3, 0xd4, 0x7, 0x23, 0x2, 0x2, 
    0xd4, 0xd5, 0x5, 0x10, 0x9, 0x2, 0xd5, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0xd7, 0x5, 0x16, 0xc, 0x2, 0xd7, 0xd8, 0x7, 0x24, 0x2, 0x2, 0xd8, 0xd9, 
    0x5, 0x10, 0x9, 0x2, 0xd9, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 
    0x16, 0xc, 0x2, 0xdb, 0xdc, 0x7, 0x25, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x10, 
    0x9, 0x2, 0xdd, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x16, 0xc, 
    0x2, 0xdf, 0xe0, 0x7, 0x26, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x10, 0x9, 0x2, 
    0xe1, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x16, 0xc, 0x2, 0xe3, 
    0xe4, 0x7, 0x27, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x10, 0x9, 0x2, 0xe5, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x16, 0xc, 0x2, 0xe7, 0xe8, 0x7, 
    0x28, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x10, 0x9, 0x2, 0xe9, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xeb, 0x5, 0x16, 0xc, 0x2, 0xeb, 0xec, 0x7, 0x29, 0x2, 
    0x2, 0xec, 0xed, 0x5, 0x10, 0x9, 0x2, 0xed, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xef, 0x7, 0x2a, 0x2, 0x2, 0xef, 0xf9, 0x5, 0x16, 0xc, 0x2, 0xf0, 
    0xf1, 0x7, 0x2b, 0x2, 0x2, 0xf1, 0xf9, 0x5, 0x16, 0xc, 0x2, 0xf2, 0xf3, 
    0x5, 0x16, 0xc, 0x2, 0xf3, 0xf4, 0x7, 0x2a, 0x2, 0x2, 0xf4, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0x16, 0xc, 0x2, 0xf6, 0xf7, 0x7, 0x2b, 
    0x2, 0x2, 0xf7, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xca, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xce, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xd2, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xda, 0x3, 0x2, 0x2, 0x2, 0xf8, 
    0xde, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0xf8, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf9, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0xfa, 0x101, 0x7, 0x33, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x33, 0x2, 0x2, 
    0xfc, 0xfd, 0x7, 0x7, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x10, 0x9, 0x2, 0xfe, 
    0xff, 0x7, 0x9, 0x2, 0x2, 0xff, 0x101, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfa, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x101, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x103, 0x5, 0x26, 0x14, 0x2, 0x103, 0x104, 0x7, 
    0x33, 0x2, 0x2, 0x104, 0x105, 0x7, 0xd, 0x2, 0x2, 0x105, 0x106, 0x5, 
    0x1e, 0x10, 0x2, 0x106, 0x107, 0x7, 0xe, 0x2, 0x2, 0x107, 0x108, 0x5, 
    0x1a, 0xe, 0x2, 0x108, 0x111, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x5, 
    0x28, 0x15, 0x2, 0x10a, 0x10b, 0x7, 0x33, 0x2, 0x2, 0x10b, 0x10c, 0x7, 
    0xd, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x1e, 0x10, 0x2, 0x10d, 0x10e, 0x7, 
    0xe, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x1a, 0xe, 0x2, 0x10f, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x102, 0x3, 0x2, 0x2, 0x2, 0x110, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x19, 0x3, 0x2, 0x2, 0x2, 0x112, 0x116, 0x7, 0xb, 
    0x2, 0x2, 0x113, 0x115, 0x5, 0x6, 0x4, 0x2, 0x114, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 0x5, 0x8, 
    0x5, 0x2, 0x11a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11e, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x11d, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x120, 0x7, 0xc, 0x2, 0x2, 0x120, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x121, 0x125, 0x7, 0xb, 0x2, 0x2, 0x122, 0x124, 0x5, 0x8, 0x5, 
    0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 0x2, 
    0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x128, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x128, 0x129, 0x7, 0xc, 0x2, 0x2, 0x129, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x12f, 0x5, 0x20, 0x11, 0x2, 0x12b, 0x12c, 0x7, 0x21, 0x2, 0x2, 
    0x12c, 0x12e, 0x5, 0x20, 0x11, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 
    0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 0x2, 
    0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x134, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x134, 0x5, 0x28, 0x15, 0x2, 
    0x133, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x133, 0x132, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x5, 0x26, 0x14, 0x2, 
    0x136, 0x137, 0x7, 0x33, 0x2, 0x2, 0x137, 0x13e, 0x3, 0x2, 0x2, 0x2, 
    0x138, 0x139, 0x5, 0x26, 0x14, 0x2, 0x139, 0x13a, 0x7, 0x33, 0x2, 0x2, 
    0x13a, 0x13b, 0x7, 0x7, 0x2, 0x2, 0x13b, 0x13c, 0x7, 0x9, 0x2, 0x2, 
    0x13c, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x13d, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x13f, 
    0x140, 0x7, 0x2c, 0x2, 0x2, 0x140, 0x141, 0x7, 0xd, 0x2, 0x2, 0x141, 
    0x142, 0x5, 0x10, 0x9, 0x2, 0x142, 0x143, 0x7, 0xe, 0x2, 0x2, 0x143, 
    0x145, 0x5, 0x1c, 0xf, 0x2, 0x144, 0x146, 0x5, 0x24, 0x13, 0x2, 0x145, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 
    0x14e, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 0x2d, 0x2, 0x2, 0x148, 
    0x149, 0x7, 0xd, 0x2, 0x2, 0x149, 0x14a, 0x5, 0x10, 0x9, 0x2, 0x14a, 
    0x14b, 0x7, 0xe, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x1c, 0xf, 0x2, 0x14c, 
    0x14e, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x14d, 
    0x147, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x23, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 
    0x7, 0x2e, 0x2, 0x2, 0x150, 0x151, 0x5, 0x1c, 0xf, 0x2, 0x151, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x152, 0x156, 0x7, 0x2f, 0x2, 0x2, 0x153, 0x156, 
    0x7, 0x30, 0x2, 0x2, 0x154, 0x156, 0x7, 0x31, 0x2, 0x2, 0x155, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x156, 0x27, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x7, 
    0x32, 0x2, 0x2, 0x158, 0x29, 0x3, 0x2, 0x2, 0x2, 0x19, 0x30, 0x36, 0x3a, 
    0x46, 0x4a, 0x5a, 0x74, 0x89, 0xbb, 0xbd, 0xc5, 0xf8, 0x100, 0x110, 
    0x116, 0x11c, 0x125, 0x12f, 0x133, 0x13d, 0x145, 0x14d, 0x155, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

grammaireParser::Initializer grammaireParser::_init;
