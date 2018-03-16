
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
  enterRule(_localctx, 0, grammaireParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(35);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(32);
        varGlobale(); 
      }
      setState(37);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(39); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(38);
      definition();
      setState(41); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grammaireParser::T__45)
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

//----------------- InstructionContext ------------------------------------------------------------------

grammaireParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grammaireParser::DeclarationContext* grammaireParser::InstructionContext::declaration() {
  return getRuleContext<grammaireParser::DeclarationContext>(0);
}

grammaireParser::InitialisationContext* grammaireParser::InstructionContext::initialisation() {
  return getRuleContext<grammaireParser::InitialisationContext>(0);
}

grammaireParser::ExprContext* grammaireParser::InstructionContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::BlocContext* grammaireParser::InstructionContext::bloc() {
  return getRuleContext<grammaireParser::BlocContext>(0);
}

grammaireParser::StructureControleContext* grammaireParser::InstructionContext::structureControle() {
  return getRuleContext<grammaireParser::StructureControleContext>(0);
}


size_t grammaireParser::InstructionContext::getRuleIndex() const {
  return grammaireParser::RuleInstruction;
}

antlrcpp::Any grammaireParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::InstructionContext* grammaireParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 2, grammaireParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(43);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(44);
      initialisation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(45);
      expr(0);
      setState(46);
      match(grammaireParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(48);
      bloc();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(49);
      structureControle();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(50);
      match(grammaireParser::T__1);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(51);
      match(grammaireParser::T__2);
      setState(52);
      expr(0);
      setState(53);
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

//----------------- VarGlobaleContext ------------------------------------------------------------------

grammaireParser::VarGlobaleContext::VarGlobaleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grammaireParser::DeclarationContext* grammaireParser::VarGlobaleContext::declaration() {
  return getRuleContext<grammaireParser::DeclarationContext>(0);
}

grammaireParser::InitialisationContext* grammaireParser::VarGlobaleContext::initialisation() {
  return getRuleContext<grammaireParser::InitialisationContext>(0);
}


size_t grammaireParser::VarGlobaleContext::getRuleIndex() const {
  return grammaireParser::RuleVarGlobale;
}

antlrcpp::Any grammaireParser::VarGlobaleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitVarGlobale(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::VarGlobaleContext* grammaireParser::varGlobale() {
  VarGlobaleContext *_localctx = _tracker.createInstance<VarGlobaleContext>(_ctx, getState());
  enterRule(_localctx, 4, grammaireParser::RuleVarGlobale);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(57);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(58);
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

grammaireParser::TypeContext* grammaireParser::DeclarationContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::DeclarationContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

tree::TerminalNode* grammaireParser::DeclarationContext::VAL() {
  return getToken(grammaireParser::VAL, 0);
}


size_t grammaireParser::DeclarationContext::getRuleIndex() const {
  return grammaireParser::RuleDeclaration;
}

antlrcpp::Any grammaireParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::DeclarationContext* grammaireParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, grammaireParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(61);
      match(grammaireParser::T__3);
      setState(62);
      type();
      setState(63);
      match(grammaireParser::NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(65);
      type();
      setState(66);
      match(grammaireParser::NAME);
      setState(67);
      match(grammaireParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(69);
      type();
      setState(70);
      match(grammaireParser::NAME);
      setState(71);
      match(grammaireParser::T__4);
      setState(72);
      match(grammaireParser::VAL);
      setState(73);
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

grammaireParser::TypeContext* grammaireParser::InitialisationContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::InitialisationContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

tree::TerminalNode* grammaireParser::InitialisationContext::VAL() {
  return getToken(grammaireParser::VAL, 0);
}

grammaireParser::ParametreAppelContext* grammaireParser::InitialisationContext::parametreAppel() {
  return getRuleContext<grammaireParser::ParametreAppelContext>(0);
}


size_t grammaireParser::InitialisationContext::getRuleIndex() const {
  return grammaireParser::RuleInitialisation;
}

antlrcpp::Any grammaireParser::InitialisationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitInitialisation(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::InitialisationContext* grammaireParser::initialisation() {
  InitialisationContext *_localctx = _tracker.createInstance<InitialisationContext>(_ctx, getState());
  enterRule(_localctx, 8, grammaireParser::RuleInitialisation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      type();
      setState(78);
      match(grammaireParser::NAME);
      setState(79);
      match(grammaireParser::T__4);
      setState(80);
      match(grammaireParser::VAL);
      setState(81);
      match(grammaireParser::T__6);
      setState(82);
      match(grammaireParser::T__7);
      setState(83);
      match(grammaireParser::T__8);
      setState(84);
      parametreAppel();
      setState(85);
      match(grammaireParser::T__9);
      setState(86);
      match(grammaireParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(88);
      type();
      setState(89);
      match(grammaireParser::NAME);
      setState(90);
      match(grammaireParser::T__7);
      setState(91);
      match(grammaireParser::VAL);
      setState(92);
      match(grammaireParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(94);
      match(grammaireParser::T__3);
      setState(95);
      type();
      setState(96);
      match(grammaireParser::NAME);
      setState(97);
      match(grammaireParser::T__7);
      setState(98);
      match(grammaireParser::VAL);
      setState(99);
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

grammaireParser::AffectationContext* grammaireParser::ExprContext::affectation() {
  return getRuleContext<grammaireParser::AffectationContext>(0);
}

tree::TerminalNode* grammaireParser::ExprContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

tree::TerminalNode* grammaireParser::ExprContext::VAL() {
  return getToken(grammaireParser::VAL, 0);
}

tree::TerminalNode* grammaireParser::ExprContext::CHAR() {
  return getToken(grammaireParser::CHAR, 0);
}

std::vector<grammaireParser::ExprContext *> grammaireParser::ExprContext::expr() {
  return getRuleContexts<grammaireParser::ExprContext>();
}

grammaireParser::ExprContext* grammaireParser::ExprContext::expr(size_t i) {
  return getRuleContext<grammaireParser::ExprContext>(i);
}

grammaireParser::ParametreAppelContext* grammaireParser::ExprContext::parametreAppel() {
  return getRuleContext<grammaireParser::ParametreAppelContext>(0);
}


size_t grammaireParser::ExprContext::getRuleIndex() const {
  return grammaireParser::RuleExpr;
}

antlrcpp::Any grammaireParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
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
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, grammaireParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(104);
      affectation();
      break;
    }

    case 2: {
      setState(105);
      match(grammaireParser::NAME);
      break;
    }

    case 3: {
      setState(106);
      match(grammaireParser::VAL);
      break;
    }

    case 4: {
      setState(107);
      match(grammaireParser::CHAR);
      break;
    }

    case 5: {
      setState(108);
      match(grammaireParser::NAME);
      setState(109);
      match(grammaireParser::T__4);
      setState(110);
      expr(0);
      setState(111);
      match(grammaireParser::T__6);
      break;
    }

    case 6: {
      setState(113);
      match(grammaireParser::NAME);
      setState(114);
      match(grammaireParser::T__10);
      setState(115);
      parametreAppel();
      setState(116);
      match(grammaireParser::T__11);
      break;
    }

    case 7: {
      setState(118);
      match(grammaireParser::T__28);
      setState(119);
      expr(2);
      break;
    }

    case 8: {
      setState(120);
      match(grammaireParser::T__29);
      setState(121);
      expr(1);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(174);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(172);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(124);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(125);
          match(grammaireParser::T__12);
          setState(126);
          expr(19);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(127);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(128);
          match(grammaireParser::T__13);
          setState(129);
          expr(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(130);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(131);
          match(grammaireParser::T__14);
          setState(132);
          expr(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(133);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(134);
          match(grammaireParser::T__15);
          setState(135);
          expr(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(136);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(137);
          match(grammaireParser::T__16);
          setState(138);
          expr(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(139);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(140);
          match(grammaireParser::T__17);
          setState(141);
          expr(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(142);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(143);
          match(grammaireParser::T__18);
          setState(144);
          expr(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(145);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(146);
          match(grammaireParser::T__19);
          setState(147);
          expr(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(148);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(149);
          match(grammaireParser::T__20);
          setState(150);
          expr(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(151);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(152);
          match(grammaireParser::T__21);
          setState(153);
          expr(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(154);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(155);
          match(grammaireParser::T__22);
          setState(156);
          expr(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(157);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(158);
          match(grammaireParser::T__23);
          setState(159);
          expr(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(160);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(161);
          match(grammaireParser::T__24);
          setState(162);
          expr(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(163);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(164);
          match(grammaireParser::T__25);
          setState(165);
          expr(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(167);
          match(grammaireParser::T__26);
          setState(168);
          expr(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(169);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(170);
          match(grammaireParser::T__27);
          setState(171);
          expr(4);
          break;
        }

        } 
      }
      setState(176);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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
  enterRule(_localctx, 12, grammaireParser::RuleParametreAppel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammaireParser::T__28:
      case grammaireParser::T__29:
      case grammaireParser::T__40:
      case grammaireParser::T__41:
      case grammaireParser::NAME:
      case grammaireParser::VAL:
      case grammaireParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(182);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(177);
            expr(0);
            setState(178);
            match(grammaireParser::T__30); 
          }
          setState(184);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
        }
        setState(185);
        expr(0);
        break;
      }

      case grammaireParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(186);
        match(grammaireParser::T__31);
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

//----------------- AffectationContext ------------------------------------------------------------------

grammaireParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grammaireParser::LeftValueContext* grammaireParser::AffectationContext::leftValue() {
  return getRuleContext<grammaireParser::LeftValueContext>(0);
}

grammaireParser::ExprContext* grammaireParser::AffectationContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}


size_t grammaireParser::AffectationContext::getRuleIndex() const {
  return grammaireParser::RuleAffectation;
}

antlrcpp::Any grammaireParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::AffectationContext* grammaireParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 14, grammaireParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(235);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(189);
      leftValue();
      setState(190);
      match(grammaireParser::T__7);
      setState(191);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(193);
      leftValue();
      setState(194);
      match(grammaireParser::T__32);
      setState(195);
      expr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(197);
      leftValue();
      setState(198);
      match(grammaireParser::T__33);
      setState(199);
      expr(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(201);
      leftValue();
      setState(202);
      match(grammaireParser::T__34);
      setState(203);
      expr(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(205);
      leftValue();
      setState(206);
      match(grammaireParser::T__35);
      setState(207);
      expr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(209);
      leftValue();
      setState(210);
      match(grammaireParser::T__36);
      setState(211);
      expr(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(213);
      leftValue();
      setState(214);
      match(grammaireParser::T__37);
      setState(215);
      expr(0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(217);
      leftValue();
      setState(218);
      match(grammaireParser::T__38);
      setState(219);
      expr(0);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(221);
      leftValue();
      setState(222);
      match(grammaireParser::T__39);
      setState(223);
      expr(0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(225);
      match(grammaireParser::T__40);
      setState(226);
      leftValue();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(227);
      match(grammaireParser::T__41);
      setState(228);
      leftValue();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(229);
      leftValue();
      setState(230);
      match(grammaireParser::T__40);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(232);
      leftValue();
      setState(233);
      match(grammaireParser::T__41);
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

tree::TerminalNode* grammaireParser::LeftValueContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ExprContext* grammaireParser::LeftValueContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}


size_t grammaireParser::LeftValueContext::getRuleIndex() const {
  return grammaireParser::RuleLeftValue;
}

antlrcpp::Any grammaireParser::LeftValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitLeftValue(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::LeftValueContext* grammaireParser::leftValue() {
  LeftValueContext *_localctx = _tracker.createInstance<LeftValueContext>(_ctx, getState());
  enterRule(_localctx, 16, grammaireParser::RuleLeftValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(237);
      match(grammaireParser::NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(238);
      match(grammaireParser::NAME);
      setState(239);
      match(grammaireParser::T__4);
      setState(240);
      expr(0);
      setState(241);
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

grammaireParser::TypeContext* grammaireParser::DefinitionContext::type() {
  return getRuleContext<grammaireParser::TypeContext>(0);
}

tree::TerminalNode* grammaireParser::DefinitionContext::NAME() {
  return getToken(grammaireParser::NAME, 0);
}

grammaireParser::ParametreDefinitionContext* grammaireParser::DefinitionContext::parametreDefinition() {
  return getRuleContext<grammaireParser::ParametreDefinitionContext>(0);
}

grammaireParser::BlocContext* grammaireParser::DefinitionContext::bloc() {
  return getRuleContext<grammaireParser::BlocContext>(0);
}


size_t grammaireParser::DefinitionContext::getRuleIndex() const {
  return grammaireParser::RuleDefinition;
}

antlrcpp::Any grammaireParser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::DefinitionContext* grammaireParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 18, grammaireParser::RuleDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    type();
    setState(246);
    match(grammaireParser::NAME);
    setState(247);
    match(grammaireParser::T__10);
    setState(248);
    parametreDefinition();
    setState(249);
    match(grammaireParser::T__11);
    setState(250);
    bloc();
   
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

std::vector<grammaireParser::InstructionContext *> grammaireParser::BlocContext::instruction() {
  return getRuleContexts<grammaireParser::InstructionContext>();
}

grammaireParser::InstructionContext* grammaireParser::BlocContext::instruction(size_t i) {
  return getRuleContext<grammaireParser::InstructionContext>(i);
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
  enterRule(_localctx, 20, grammaireParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(grammaireParser::T__8);
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grammaireParser::T__1)
      | (1ULL << grammaireParser::T__2)
      | (1ULL << grammaireParser::T__3)
      | (1ULL << grammaireParser::T__8)
      | (1ULL << grammaireParser::T__28)
      | (1ULL << grammaireParser::T__29)
      | (1ULL << grammaireParser::T__40)
      | (1ULL << grammaireParser::T__41)
      | (1ULL << grammaireParser::T__42)
      | (1ULL << grammaireParser::T__43)
      | (1ULL << grammaireParser::T__45)
      | (1ULL << grammaireParser::T__46)
      | (1ULL << grammaireParser::T__47)
      | (1ULL << grammaireParser::NAME)
      | (1ULL << grammaireParser::VAL)
      | (1ULL << grammaireParser::CHAR))) != 0)) {
      setState(253);
      instruction();
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(259);
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

std::vector<grammaireParser::TypeContext *> grammaireParser::ParametreDefinitionContext::type() {
  return getRuleContexts<grammaireParser::TypeContext>();
}

grammaireParser::TypeContext* grammaireParser::ParametreDefinitionContext::type(size_t i) {
  return getRuleContext<grammaireParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> grammaireParser::ParametreDefinitionContext::NAME() {
  return getTokens(grammaireParser::NAME);
}

tree::TerminalNode* grammaireParser::ParametreDefinitionContext::NAME(size_t i) {
  return getToken(grammaireParser::NAME, i);
}

grammaireParser::Type_voidContext* grammaireParser::ParametreDefinitionContext::type_void() {
  return getRuleContext<grammaireParser::Type_voidContext>(0);
}


size_t grammaireParser::ParametreDefinitionContext::getRuleIndex() const {
  return grammaireParser::RuleParametreDefinition;
}

antlrcpp::Any grammaireParser::ParametreDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitParametreDefinition(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::ParametreDefinitionContext* grammaireParser::parametreDefinition() {
  ParametreDefinitionContext *_localctx = _tracker.createInstance<ParametreDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, grammaireParser::RuleParametreDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(280);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammaireParser::T__45:
      case grammaireParser::T__46:
      case grammaireParser::T__47: {
        enterOuterAlt(_localctx, 1);
        setState(261);
        type();
        setState(262);
        match(grammaireParser::NAME);
        setState(265);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == grammaireParser::T__4) {
          setState(263);
          match(grammaireParser::T__4);
          setState(264);
          match(grammaireParser::T__6);
        }
        setState(276);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == grammaireParser::T__30) {
          setState(267);
          match(grammaireParser::T__30);
          setState(268);
          type();
          setState(269);
          match(grammaireParser::NAME);
          setState(272);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == grammaireParser::T__4) {
            setState(270);
            match(grammaireParser::T__4);
            setState(271);
            match(grammaireParser::T__6);
          }
          setState(278);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case grammaireParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(279);
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

//----------------- StructureControleContext ------------------------------------------------------------------

grammaireParser::StructureControleContext::StructureControleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grammaireParser::ExprContext* grammaireParser::StructureControleContext::expr() {
  return getRuleContext<grammaireParser::ExprContext>(0);
}

grammaireParser::BlocContext* grammaireParser::StructureControleContext::bloc() {
  return getRuleContext<grammaireParser::BlocContext>(0);
}

grammaireParser::ElseBlocContext* grammaireParser::StructureControleContext::elseBloc() {
  return getRuleContext<grammaireParser::ElseBlocContext>(0);
}


size_t grammaireParser::StructureControleContext::getRuleIndex() const {
  return grammaireParser::RuleStructureControle;
}

antlrcpp::Any grammaireParser::StructureControleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitStructureControle(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::StructureControleContext* grammaireParser::structureControle() {
  StructureControleContext *_localctx = _tracker.createInstance<StructureControleContext>(_ctx, getState());
  enterRule(_localctx, 24, grammaireParser::RuleStructureControle);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(296);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammaireParser::T__42: {
        enterOuterAlt(_localctx, 1);
        setState(282);
        match(grammaireParser::T__42);
        setState(283);
        match(grammaireParser::T__10);
        setState(284);
        expr(0);
        setState(285);
        match(grammaireParser::T__11);
        setState(286);
        bloc();
        setState(288);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == grammaireParser::T__44) {
          setState(287);
          elseBloc();
        }
        break;
      }

      case grammaireParser::T__43: {
        enterOuterAlt(_localctx, 2);
        setState(290);
        match(grammaireParser::T__43);
        setState(291);
        match(grammaireParser::T__10);
        setState(292);
        expr(0);
        setState(293);
        match(grammaireParser::T__11);
        setState(294);
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

//----------------- ElseBlocContext ------------------------------------------------------------------

grammaireParser::ElseBlocContext::ElseBlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grammaireParser::BlocContext* grammaireParser::ElseBlocContext::bloc() {
  return getRuleContext<grammaireParser::BlocContext>(0);
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
  enterRule(_localctx, 26, grammaireParser::RuleElseBloc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(grammaireParser::T__44);
    setState(299);
    bloc();
   
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

antlrcpp::Any grammaireParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammaireVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

grammaireParser::TypeContext* grammaireParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 28, grammaireParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grammaireParser::T__45)
      | (1ULL << grammaireParser::T__46)
      | (1ULL << grammaireParser::T__47))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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
  enterRule(_localctx, 30, grammaireParser::RuleType_void);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(grammaireParser::T__31);
   
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
    case 5: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "programme", "instruction", "varGlobale", "declaration", "initialisation", 
  "expr", "parametreAppel", "affectation", "leftValue", "definition", "bloc", 
  "parametreDefinition", "structureControle", "elseBloc", "type", "type_void"
};

std::vector<std::string> grammaireParser::_literalNames = {
  "", "';'", "'break;'", "'return'", "'const'", "'['", "'];'", "']'", "'='", 
  "'{'", "'}'", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!='", 
  "'=='", "'>'", "'<'", "'>='", "'<='", "'&'", "'&&'", "'||'", "'|'", "'^'", 
  "'~'", "'!'", "','", "'void'", "'+='", "'-='", "'*='", "'/='", "'&='", 
  "'|='", "'^='", "'>>='", "'++'", "'--'", "'if'", "'while'", "'else'", 
  "'int32_t'", "'int64_t'", "'char'"
};

std::vector<std::string> grammaireParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "NAME", "VAL", "COMMENTAIRE", 
  "CHAR"
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
    0x3, 0x36, 0x134, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 
    0x2, 0x7, 0x2, 0x24, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x27, 0xb, 0x2, 0x3, 
    0x2, 0x6, 0x2, 0x2a, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x2b, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3a, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x3e, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x4e, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x68, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x7d, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xaf, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0xb2, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0xb7, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xba, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0xbe, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0xee, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x5, 0xa, 0xf6, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x101, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x104, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x10c, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x113, 0xa, 0xd, 0x7, 
    0xd, 0x115, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x118, 0xb, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x11b, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x123, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x12b, 0xa, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x2, 0x3, 0xc, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 0x3, 0x3, 0x2, 0x30, 
    0x32, 0x2, 0x15d, 0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x4, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x67, 0x3, 0x2, 0x2, 0x2, 0xc, 0x7c, 0x3, 0x2, 0x2, 0x2, 0xe, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xed, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x16, 0xfe, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x131, 0x3, 0x2, 0x2, 0x2, 0x22, 0x24, 0x5, 0x6, 0x4, 0x2, 0x23, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x27, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2a, 0x5, 0x14, 
    0xb, 0x2, 0x29, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x3a, 0x5, 0x8, 0x5, 0x2, 0x2e, 
    0x3a, 0x5, 0xa, 0x6, 0x2, 0x2f, 0x30, 0x5, 0xc, 0x7, 0x2, 0x30, 0x31, 
    0x7, 0x3, 0x2, 0x2, 0x31, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x3a, 0x5, 
    0x16, 0xc, 0x2, 0x33, 0x3a, 0x5, 0x1a, 0xe, 0x2, 0x34, 0x3a, 0x7, 0x4, 
    0x2, 0x2, 0x35, 0x36, 0x7, 0x5, 0x2, 0x2, 0x36, 0x37, 0x5, 0xc, 0x7, 
    0x2, 0x37, 0x38, 0x7, 0x3, 0x2, 0x2, 0x38, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x39, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x39, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x39, 0x32, 0x3, 0x2, 0x2, 0x2, 0x39, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x34, 0x3, 0x2, 0x2, 0x2, 0x39, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x5, 0x8, 
    0x5, 0x2, 0x3c, 0x3e, 0x5, 0xa, 0x6, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x40, 0x7, 0x6, 0x2, 0x2, 0x40, 0x41, 0x5, 0x1e, 0x10, 0x2, 0x41, 
    0x42, 0x7, 0x33, 0x2, 0x2, 0x42, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 
    0x5, 0x1e, 0x10, 0x2, 0x44, 0x45, 0x7, 0x33, 0x2, 0x2, 0x45, 0x46, 0x7, 
    0x3, 0x2, 0x2, 0x46, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0x1e, 
    0x10, 0x2, 0x48, 0x49, 0x7, 0x33, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x7, 0x2, 
    0x2, 0x4a, 0x4b, 0x7, 0x34, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x8, 0x2, 0x2, 
    0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x1e, 0x10, 0x2, 0x50, 0x51, 0x7, 
    0x33, 0x2, 0x2, 0x51, 0x52, 0x7, 0x7, 0x2, 0x2, 0x52, 0x53, 0x7, 0x34, 
    0x2, 0x2, 0x53, 0x54, 0x7, 0x9, 0x2, 0x2, 0x54, 0x55, 0x7, 0xa, 0x2, 
    0x2, 0x55, 0x56, 0x7, 0xb, 0x2, 0x2, 0x56, 0x57, 0x5, 0xe, 0x8, 0x2, 
    0x57, 0x58, 0x7, 0xc, 0x2, 0x2, 0x58, 0x59, 0x7, 0x3, 0x2, 0x2, 0x59, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x1e, 0x10, 0x2, 0x5b, 0x5c, 
    0x7, 0x33, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0xa, 0x2, 0x2, 0x5d, 0x5e, 0x7, 
    0x34, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x3, 0x2, 0x2, 0x5f, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x61, 0x7, 0x6, 0x2, 0x2, 0x61, 0x62, 0x5, 0x1e, 0x10, 
    0x2, 0x62, 0x63, 0x7, 0x33, 0x2, 0x2, 0x63, 0x64, 0x7, 0xa, 0x2, 0x2, 
    0x64, 0x65, 0x7, 0x34, 0x2, 0x2, 0x65, 0x66, 0x7, 0x3, 0x2, 0x2, 0x66, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x67, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x67, 0x5a, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x60, 0x3, 0x2, 0x2, 0x2, 0x68, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x6a, 0x8, 0x7, 0x1, 0x2, 0x6a, 0x7d, 0x5, 0x10, 
    0x9, 0x2, 0x6b, 0x7d, 0x7, 0x33, 0x2, 0x2, 0x6c, 0x7d, 0x7, 0x34, 0x2, 
    0x2, 0x6d, 0x7d, 0x7, 0x36, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x33, 0x2, 0x2, 
    0x6f, 0x70, 0x7, 0x7, 0x2, 0x2, 0x70, 0x71, 0x5, 0xc, 0x7, 0x2, 0x71, 
    0x72, 0x7, 0x9, 0x2, 0x2, 0x72, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 
    0x7, 0x33, 0x2, 0x2, 0x74, 0x75, 0x7, 0xd, 0x2, 0x2, 0x75, 0x76, 0x5, 
    0xe, 0x8, 0x2, 0x76, 0x77, 0x7, 0xe, 0x2, 0x2, 0x77, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x79, 0x7, 0x1f, 0x2, 0x2, 0x79, 0x7d, 0x5, 0xc, 0x7, 
    0x4, 0x7a, 0x7b, 0x7, 0x20, 0x2, 0x2, 0x7b, 0x7d, 0x5, 0xc, 0x7, 0x3, 
    0x7c, 0x69, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x73, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0xb0, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x7f, 0xc, 0x14, 0x2, 0x2, 0x7f, 0x80, 0x7, 0xf, 0x2, 
    0x2, 0x80, 0xaf, 0x5, 0xc, 0x7, 0x15, 0x81, 0x82, 0xc, 0x13, 0x2, 0x2, 
    0x82, 0x83, 0x7, 0x10, 0x2, 0x2, 0x83, 0xaf, 0x5, 0xc, 0x7, 0x14, 0x84, 
    0x85, 0xc, 0x12, 0x2, 0x2, 0x85, 0x86, 0x7, 0x11, 0x2, 0x2, 0x86, 0xaf, 
    0x5, 0xc, 0x7, 0x13, 0x87, 0x88, 0xc, 0x11, 0x2, 0x2, 0x88, 0x89, 0x7, 
    0x12, 0x2, 0x2, 0x89, 0xaf, 0x5, 0xc, 0x7, 0x12, 0x8a, 0x8b, 0xc, 0x10, 
    0x2, 0x2, 0x8b, 0x8c, 0x7, 0x13, 0x2, 0x2, 0x8c, 0xaf, 0x5, 0xc, 0x7, 
    0x11, 0x8d, 0x8e, 0xc, 0xf, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x14, 0x2, 0x2, 
    0x8f, 0xaf, 0x5, 0xc, 0x7, 0x10, 0x90, 0x91, 0xc, 0xe, 0x2, 0x2, 0x91, 
    0x92, 0x7, 0x15, 0x2, 0x2, 0x92, 0xaf, 0x5, 0xc, 0x7, 0xf, 0x93, 0x94, 
    0xc, 0xd, 0x2, 0x2, 0x94, 0x95, 0x7, 0x16, 0x2, 0x2, 0x95, 0xaf, 0x5, 
    0xc, 0x7, 0xe, 0x96, 0x97, 0xc, 0xc, 0x2, 0x2, 0x97, 0x98, 0x7, 0x17, 
    0x2, 0x2, 0x98, 0xaf, 0x5, 0xc, 0x7, 0xd, 0x99, 0x9a, 0xc, 0xb, 0x2, 
    0x2, 0x9a, 0x9b, 0x7, 0x18, 0x2, 0x2, 0x9b, 0xaf, 0x5, 0xc, 0x7, 0xc, 
    0x9c, 0x9d, 0xc, 0xa, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x19, 0x2, 0x2, 0x9e, 
    0xaf, 0x5, 0xc, 0x7, 0xb, 0x9f, 0xa0, 0xc, 0x9, 0x2, 0x2, 0xa0, 0xa1, 
    0x7, 0x1a, 0x2, 0x2, 0xa1, 0xaf, 0x5, 0xc, 0x7, 0xa, 0xa2, 0xa3, 0xc, 
    0x8, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x1b, 0x2, 0x2, 0xa4, 0xaf, 0x5, 0xc, 
    0x7, 0x9, 0xa5, 0xa6, 0xc, 0x7, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x1c, 0x2, 
    0x2, 0xa7, 0xaf, 0x5, 0xc, 0x7, 0x8, 0xa8, 0xa9, 0xc, 0x6, 0x2, 0x2, 
    0xa9, 0xaa, 0x7, 0x1d, 0x2, 0x2, 0xaa, 0xaf, 0x5, 0xc, 0x7, 0x7, 0xab, 
    0xac, 0xc, 0x5, 0x2, 0x2, 0xac, 0xad, 0x7, 0x1e, 0x2, 0x2, 0xad, 0xaf, 
    0x5, 0xc, 0x7, 0x6, 0xae, 0x7e, 0x3, 0x2, 0x2, 0x2, 0xae, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0x84, 0x3, 0x2, 0x2, 0x2, 0xae, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0xae, 0x8a, 0x3, 0x2, 0x2, 0x2, 0xae, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0x90, 0x3, 0x2, 0x2, 0x2, 0xae, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0x96, 0x3, 0x2, 0x2, 0x2, 0xae, 0x99, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0x9c, 0x3, 0x2, 0x2, 0x2, 0xae, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xae, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xae, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xd, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0xb4, 0x5, 0xc, 0x7, 0x2, 0xb4, 0xb5, 0x7, 0x21, 0x2, 0x2, 0xb5, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbe, 0x5, 0xc, 0x7, 0x2, 0xbc, 0xbe, 0x7, 0x22, 0x2, 
    0x2, 0xbd, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0x12, 0xa, 0x2, 0xc0, 
    0xc1, 0x7, 0xa, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0xc, 0x7, 0x2, 0xc2, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x12, 0xa, 0x2, 0xc4, 0xc5, 0x7, 
    0x23, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0xc, 0x7, 0x2, 0xc6, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xc8, 0x5, 0x12, 0xa, 0x2, 0xc8, 0xc9, 0x7, 0x24, 0x2, 
    0x2, 0xc9, 0xca, 0x5, 0xc, 0x7, 0x2, 0xca, 0xee, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x5, 0x12, 0xa, 0x2, 0xcc, 0xcd, 0x7, 0x25, 0x2, 0x2, 0xcd, 
    0xce, 0x5, 0xc, 0x7, 0x2, 0xce, 0xee, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
    0x5, 0x12, 0xa, 0x2, 0xd0, 0xd1, 0x7, 0x26, 0x2, 0x2, 0xd1, 0xd2, 0x5, 
    0xc, 0x7, 0x2, 0xd2, 0xee, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x12, 
    0xa, 0x2, 0xd4, 0xd5, 0x7, 0x27, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0xc, 0x7, 
    0x2, 0xd6, 0xee, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x12, 0xa, 0x2, 
    0xd8, 0xd9, 0x7, 0x28, 0x2, 0x2, 0xd9, 0xda, 0x5, 0xc, 0x7, 0x2, 0xda, 
    0xee, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x12, 0xa, 0x2, 0xdc, 0xdd, 
    0x7, 0x29, 0x2, 0x2, 0xdd, 0xde, 0x5, 0xc, 0x7, 0x2, 0xde, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x12, 0xa, 0x2, 0xe0, 0xe1, 0x7, 0x2a, 
    0x2, 0x2, 0xe1, 0xe2, 0x5, 0xc, 0x7, 0x2, 0xe2, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe4, 0x7, 0x2b, 0x2, 0x2, 0xe4, 0xee, 0x5, 0x12, 0xa, 0x2, 
    0xe5, 0xe6, 0x7, 0x2c, 0x2, 0x2, 0xe6, 0xee, 0x5, 0x12, 0xa, 0x2, 0xe7, 
    0xe8, 0x5, 0x12, 0xa, 0x2, 0xe8, 0xe9, 0x7, 0x2b, 0x2, 0x2, 0xe9, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x12, 0xa, 0x2, 0xeb, 0xec, 0x7, 
    0x2c, 0x2, 0x2, 0xec, 0xee, 0x3, 0x2, 0x2, 0x2, 0xed, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xed, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xed, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xed, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xed, 
    0xdb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xed, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0xed, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xed, 0xe7, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xea, 0x3, 0x2, 0x2, 0x2, 0xee, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xf6, 0x7, 0x33, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x33, 0x2, 
    0x2, 0xf1, 0xf2, 0x7, 0x7, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0xc, 0x7, 0x2, 
    0xf3, 0xf4, 0x7, 0x9, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x1e, 0x10, 0x2, 0xf8, 0xf9, 0x7, 
    0x33, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0xd, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x18, 
    0xd, 0x2, 0xfb, 0xfc, 0x7, 0xe, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x16, 0xc, 
    0x2, 0xfd, 0x15, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x102, 0x7, 0xb, 0x2, 0x2, 
    0xff, 0x101, 0x5, 0x4, 0x3, 0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x104, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0xc, 0x2, 0x2, 0x106, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 0x1e, 0x10, 0x2, 0x108, 
    0x10b, 0x7, 0x33, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x7, 0x2, 0x2, 0x10a, 
    0x10c, 0x7, 0x9, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x116, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x10e, 0x7, 0x21, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x1e, 0x10, 0x2, 0x10f, 
    0x112, 0x7, 0x33, 0x2, 0x2, 0x110, 0x111, 0x7, 0x7, 0x2, 0x2, 0x111, 
    0x113, 0x7, 0x9, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x115, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 
    0x11b, 0x5, 0x20, 0x11, 0x2, 0x11a, 0x107, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 
    0x7, 0x2d, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0xd, 0x2, 0x2, 0x11e, 0x11f, 
    0x5, 0xc, 0x7, 0x2, 0x11f, 0x120, 0x7, 0xe, 0x2, 0x2, 0x120, 0x122, 
    0x5, 0x16, 0xc, 0x2, 0x121, 0x123, 0x5, 0x1c, 0xf, 0x2, 0x122, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x7, 0x2e, 0x2, 0x2, 0x125, 0x126, 
    0x7, 0xd, 0x2, 0x2, 0x126, 0x127, 0x5, 0xc, 0x7, 0x2, 0x127, 0x128, 
    0x7, 0xe, 0x2, 0x2, 0x128, 0x129, 0x5, 0x16, 0xc, 0x2, 0x129, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 
    0x2f, 0x2, 0x2, 0x12d, 0x12e, 0x5, 0x16, 0xc, 0x2, 0x12e, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x12f, 0x130, 0x9, 0x2, 0x2, 0x2, 0x130, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x132, 0x7, 0x22, 0x2, 0x2, 0x132, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x25, 0x2b, 0x39, 0x3d, 0x4d, 0x67, 0x7c, 0xae, 0xb0, 
    0xb8, 0xbd, 0xed, 0xf5, 0x102, 0x10b, 0x112, 0x116, 0x11a, 0x122, 0x12a, 
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
