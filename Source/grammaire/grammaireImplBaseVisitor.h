
// Generated from grammaire.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "grammaireBaseVisitor.h"
#include "../Core/compute/MapperSymbol.h"
#include "../Core/data/Definitions/Definition.h"
#include "../Core/data/Definitions/Parametre.h"
#include "../Core/data/Definitions/ParametreDefinition.h"
#include "../Core/data/Bloc.h"
#include "../Core/data/BlocStruct.h"
#include "../Core/data/Expressions/Affectation.h"
#include "../Core/data/Expressions/AffectationBinaire.h"
#include "../Core/data/Expressions/AffectationUnaire.h"
#include "../Core/data/Expressions/Char.h"
#include "../Core/data/Expressions/Expr.h"
#include "../Core/data/Expressions/ExprAppel.h"
#include "../Core/data/Expressions/Name.h"
#include "../Core/data/Expressions/NameTab.h"
#include "../Core/data/Expressions/Operation.h"
#include "../Core/data/Expressions/OperationBinaire.h"
#include "../Core/data/Expressions/OperationUnaire.h"
#include "../Core/data/Expressions/ParametreAppel.h"
#include "../Core/data/Expressions/Val.h"
#include "../Core/data/init_decl/Declaration.h"
#include "../Core/data/init_decl/DeclarationTab.h"
#include "../Core/data/init_decl/InitDecl.h"
#include "../Core/data/init_decl/Initialisation.h"
#include "../Core/data/init_decl/InitialisationTab.h"
#include "../Core/data/init_decl/InitialisationVal.h"
#include "../Core/data/init_decl/Symbole.h"
#include "../Core/data/Instructions/InstructionBreak.h"
#include "../Core/data/Instructions/InstructionControle.h"
#include "../Core/data/Instructions/InstructionExpr.h"
#include "../Core/data/Instructions/InstructionReturn.h"
#include "../Core/data/Instructions/InstructionStruct.h"
#include "../Core/data/LeftValue.h"
#include "../Core/data/Programme.h"
#include "../Core/data/Structures/ElseBloc.h"
#include "../Core/data/Structures/StructureControle.h"
#include "../Core/data/Structures/StructureIf.h"
#include "../Core/data/Structures/StructureWhile.h"
#include <string>
#include <vector>

using namespace std;


/**
* This class provides an empty implementation of grammaireVisitor, which can be
* extended to create a visitor which only needs to handle a subset of the available methods.
*/
class grammaireImplBaseVisitor : public grammaireBaseVisitor {
public:

    virtual antlrcpp::Any visitEntree(grammaireParser::EntreeContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitProgramme(grammaireParser::ProgrammeContext *ctx) override {
        vector<InitDecl *> varGlobales;
        vector<Definition *> definitions;

        for (int i = 0; i < (ctx->initDecl()).size(); i++) {
            varGlobales.push_back((InitDecl *) visit(ctx->initDecl(i)));
        }

        for (int i = 0; i < (ctx->definition()).size(); i++) {
            definitions.push_back((Definition *) visit(ctx->definition(i)));
        }

        Programme *prog = new Programme(varGlobales, definitions);
        return prog;
    }

    virtual antlrcpp::Any visitDecl(grammaireParser::DeclContext *ctx) override {
        cout << "Decl" << endl;
        return (InitDecl *) (Declaration *) visit(ctx->declaration());
    }

    virtual antlrcpp::Any visitInit(grammaireParser::InitContext *ctx) override {
        cout << "Init" << endl;
        return (InitDecl *) (Initialisation *) visit(ctx->initialisation());
    }

    virtual antlrcpp::Any visitInstExpr(grammaireParser::InstExprContext *ctx) override {
        cout << "InstExpr" << endl;
        return (InstructionStruct *) (Expr *) visit(ctx->expr());
    }

    virtual antlrcpp::Any visitInstbloc(grammaireParser::InstblocContext *ctx) override {
        cout << "Instblo" << endl;
        return (InstructionStruct *) (BlocStruct *) visit(ctx->blocStruct());
    }

    virtual antlrcpp::Any visitInstStrucControl(grammaireParser::InstStrucControlContext *ctx) override {
        cout << "InstStrucControl" << endl;
        return (InstructionStruct *) (StructureControle *) visit(ctx->structureControle());
    }

    virtual antlrcpp::Any visitInstBreak(grammaireParser::InstBreakContext *ctx) override {
        cout << "InstBreak" << endl;
        return 0;
    }

    virtual antlrcpp::Any visitInstReturn(grammaireParser::InstReturnContext *ctx) override {
        cout << "InstReturn" << endl;
        return (InstructionStruct *) (Expr *) visit(ctx->expr());
    }

    virtual antlrcpp::Any visitDeclConst(grammaireParser::DeclConstContext *ctx) override {
        cout << "DeclConst" << endl;
        return new Declaration(
                (Type) visit(ctx->type()),
                new Name(ctx->NAME()->getText()),
                true
        );
    }

    virtual antlrcpp::Any visitDeclVar(grammaireParser::DeclVarContext *ctx) override {
        cout << "DeclVar" << endl;
        Name *name = new Name(ctx->NAME()->getText());
        //name->setSymbol(mapperSymbol.findSymbol(name, ctxCourant, ctxBlocCourant));
        return new Declaration(
                static_cast<Type>(visit(ctx->type())),
                name,
                false
        );
    }

    virtual antlrcpp::Any visitDeclTab(grammaireParser::DeclTabContext *ctx) override {
        cout << "DeclTab" << endl;
        return (Declaration *) new DeclarationTab(
                (Type) visit(ctx->type()),
                new Name(ctx->NAME()->getText()),
                false,
                new Val(stoi(ctx->VAL()->getText()))
        );
    }

    virtual antlrcpp::Any visitInitTab(grammaireParser::InitTabContext *ctx) override {
        cout << "InitTab" << endl;
        return (Initialisation *) new InitialisationTab(
                (Type) visit(ctx->type()),
                new Name(ctx->NAME()->getText()),
                false,
                new Val(stoi(ctx->VAL()->getText())),
                (ParametreAppel *) visit(ctx->parametreAppel())
        );
    }

    virtual antlrcpp::Any visitInitVar(grammaireParser::InitVarContext *ctx) override {
        cout << "InitVar" << endl;
        Initialisation *i = (Initialisation *) new InitialisationVal(
                (Type) visit(ctx->type()),
                new Name(ctx->NAME()->getText()),
                false,
                new Val(stoi(ctx->VAL()->getText()))
        );
        cout << "after initVar" << endl;
        return i;
    }

    virtual antlrcpp::Any visitInitConst(grammaireParser::InitConstContext *ctx) override {
        cout << "InitConst" << endl;
        return (Initialisation *)
                new InitialisationVal(
                        (Type) visit(ctx->type()),
                        new Name(ctx->NAME()->getText()),
                        true,
                        new Val(stoi(ctx->VAL()->getText()))
                );
    }

    virtual antlrcpp::Any visitExprXorBit(grammaireParser::ExprXorBitContext *ctx) override {
        cout << "visitExprXorBit" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        BITWISE_XOR,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprMult(grammaireParser::ExprMultContext *ctx) override {
        cout << "visitExprMult" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        MULT,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprName(grammaireParser::ExprNameContext *ctx) override {
        cout << "visitExprName" << endl;
        return (Expr *) new Name(ctx->NAME()->getText());
    }

    virtual antlrcpp::Any visitExprNoBit(grammaireParser::ExprNoBitContext *ctx) override {
        cout << "visitExprNoBit" << endl;
        return (Expr *) new OperationUnaire((Expr *) visit(ctx->expr()), NO_BIT);
    }

    virtual antlrcpp::Any visitExprChar(grammaireParser::ExprCharContext *ctx) override {
        cout << "visitExprChar" << endl;
        return (Expr *) new Char((ctx->CHAR()->getText()).at(0));
    }

    virtual antlrcpp::Any visitExprSupOrEqual(grammaireParser::ExprSupOrEqualContext *ctx) override {
        cout << "visitExprSupOrEqual" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        SUP_EGAL,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprAffect(grammaireParser::ExprAffectContext *ctx) override {
        cout << "visitExprAffect" << endl;
        return (Expr *) (Affectation *) visit(ctx->affectation());
    }

    virtual antlrcpp::Any visitExprSup(grammaireParser::ExprSupContext *ctx) override {
        cout << "visitExprSup" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        SUP,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprInfOrEqual(grammaireParser::ExprInfOrEqualContext *ctx) override {
        cout << "visitExprInfOrEqual" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        INF_EGAL,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprFnct(grammaireParser::ExprFnctContext *ctx) override {
        cout << "visitExprFnct" << endl;
        return (Expr *) new ExprAppel(
                new Name(ctx->NAME()->getText()),
                (ParametreAppel *) visit(ctx->parametreAppel())
        );
    }

    virtual antlrcpp::Any visitExprDiv(grammaireParser::ExprDivContext *ctx) override {
        cout << "visitExprDiv" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        DIV,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprAnd(grammaireParser::ExprAndContext *ctx) override {
        cout << "visitExprAnd" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        AND,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprTab(grammaireParser::ExprTabContext *ctx) override {
        cout << "visitExprTab" << endl;
        return (Expr *)
                new NameTab(
                        ctx->NAME()->getText(),
                        (Expr *) visit(ctx->expr())
                );
    }

    virtual antlrcpp::Any visitExprOr(grammaireParser::ExprOrContext *ctx) override {
        cout << "visitExprOr" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        OR,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprNo(grammaireParser::ExprNoContext *ctx) override {
        cout << "visitExprNo" << endl;
        return (Expr *)
                new OperationUnaire(
                        (Expr *) visit(ctx->expr()),
                        NO);
    }

    virtual antlrcpp::Any visitExprDiff(grammaireParser::ExprDiffContext *ctx) override {
        cout << "visitExprDiff" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        DIFF,
                        (Expr *) visit(ctx->expr(1)));
    }

    virtual antlrcpp::Any visitExprSub(grammaireParser::ExprSubContext *ctx) override {
        cout << "visitExprSub" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        MINUS,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprAndBit(grammaireParser::ExprAndBitContext *ctx) override {
        cout << "visitExprAndBit" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        BITWISE_AND,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprOrBit(grammaireParser::ExprOrBitContext *ctx) override {
        cout << "visitExprOrBit" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        BITWISE_OR,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprEqual(grammaireParser::ExprEqualContext *ctx) override {
        cout << "visitExprEqual" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        BITWISE_OR,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprVal(grammaireParser::ExprValContext *ctx) override {
        cout << "visitExprVal" << endl;
        return (Expr *)
                new Val(stoi(ctx->VAL()->getText()));
    }

    virtual antlrcpp::Any visitExprAdd(grammaireParser::ExprAddContext *ctx) override {
        cout << "visitExprAdd" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        PLUS,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprInf(grammaireParser::ExprInfContext *ctx) override {
        cout << "visitExprInf" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        INF,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitExprMod(grammaireParser::ExprModContext *ctx) override {
        cout << "visitExprMod" << endl;
        return (Expr *)
                new OperationBinaire(
                        (Expr *) visit(ctx->expr(0)),
                        MODULO,
                        (Expr *) visit(ctx->expr(1))
                );
    }

    virtual antlrcpp::Any visitParametreAppel(grammaireParser::ParametreAppelContext *ctx) override {
        cout << "visitParametreAppel" << endl;
        vector<Expr *> vecteurParam;
        for (int i = 0; i < (ctx->expr()).size(); i++) {
            vecteurParam.push_back((Expr *) visit(ctx->expr(i)));
        }

        return new ParametreAppel(vecteurParam);
    }

    virtual antlrcpp::Any visitAffectEqual(grammaireParser::AffectEqualContext *ctx) override {

        cout << "visitAffectEqual" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        EGAL,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any visitAffectPlusEqual(grammaireParser::AffectPlusEqualContext *ctx) override {

        cout << "visitAffectPlusEqual" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        PLUS_EGAL,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any visitAffectMinusEqual(grammaireParser::AffectMinusEqualContext *ctx) override {

        cout << "visitAffectMinusEqual" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        MOINS_EGAL,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any visitAffectMultEqual(grammaireParser::AffectMultEqualContext *ctx) override {


        cout << "visitAffectMultEqual" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        MULT_EGAL,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any visitAffectDivision(grammaireParser::AffectDivisionContext *ctx) override {

        cout << "visitAffectDivision" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        DIV_EGAL,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any visitAffectBitwiseAnd(grammaireParser::AffectBitwiseAndContext *ctx) override {


        cout << "visitAffectBitwiseAnd" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        BITWISE_AND_A,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any visitAffectBitwiseOr(grammaireParser::AffectBitwiseOrContext *ctx) override {


        cout << "visitAffectBitwiseOr" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        BITWISE_OR_A,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any visitAffectBitwiseXor(grammaireParser::AffectBitwiseXorContext *ctx) override {


        cout << "visitAffectBitwiseXor" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        BITWISE_XOR_A,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any visitAffectBitwiseRightShift(grammaireParser::AffectBitwiseRightShiftContext *ctx) override {

        cout << "visitAffectBitwiseRightShift" << endl;
        return (Affectation *)
                new AffectationBinaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        BITWISE_RIGHTSHIFT,
                        (Expr *) visit(ctx->expr())
                );

    }

    virtual antlrcpp::Any
    visitAffectIncrementationBefore(grammaireParser::AffectIncrementationBeforeContext *ctx) override {

        cout << "visitAffectIncrementationBefore" << endl;
        return (Affectation *)
                new AffectationUnaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        PPLUS
                );

    }

    virtual antlrcpp::Any
    visitAffectDecrementationBefore(grammaireParser::AffectDecrementationBeforeContext *ctx) override {
        cout << "visitAffectDecrementationBefore" << endl;
        return (Affectation *)
                new AffectationUnaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        MMOINS
                );
    }

    virtual antlrcpp::Any
    visitAffectIncrementationAfter(grammaireParser::AffectIncrementationAfterContext *ctx) override {
        cout << "visitAffectIncrementationAfter" << endl;
        return (Affectation *)
                new AffectationUnaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        PPLUS_AFTER
                );
    }

    virtual antlrcpp::Any
    visitAffectDecrementationAfter(grammaireParser::AffectDecrementationAfterContext *ctx) override {
        cout << "visitAffectDecrementationAfter" << endl;
        return (Affectation *)
                new AffectationUnaire(
                        (LeftValue *) visit(ctx->leftValue()),
                        MMOINS_AFTER
                );
    }

    virtual antlrcpp::Any visitLeftValueVar(grammaireParser::LeftValueVarContext *ctx) override {
        cout << "visitLeftValueVar" << endl;
        return (LeftValue *)
                new Name(ctx->NAME()->getText());
    }

    virtual antlrcpp::Any visitLeftValueTab(grammaireParser::LeftValueTabContext *ctx) override {
        cout << "visitLeftValueTab" << endl;
        return (LeftValue *)
                new NameTab(
                        ctx->NAME()->getText(),
                        (Expr *) visit(ctx->expr())
                );
    }

    virtual antlrcpp::Any visitDefFnct(grammaireParser::DefFnctContext *ctx) override {
        cout << "visitDefFnct" << endl;
        return new Definition(
                (Type) visit(ctx->type()),
                new Name(ctx->NAME()->getText()), 
				(ParametreDefinition *) visit(ctx->parametreDefinition()),
                (Bloc *) visit(ctx->bloc())
        );

    }

    virtual antlrcpp::Any visitDefProc(grammaireParser::DefProcContext *ctx) override {
        cout << "visitDefProc" << endl;
        return new Definition(
                void_type,
                new Name(ctx->NAME()->getText()),
                (ParametreDefinition *) visit(ctx->parametreDefinition()),
                (Bloc *) visit(ctx->bloc())
        );
    }

    virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *ctx) override {
        //ctx->getParent();
        cout << "visitBloc" << endl;
        vector<InstructionStruct *> vecteurInstr;
        vector<InitDecl *> vecteurDecl;
        for (int i = 0; i < (ctx->initDecl()).size(); i++) {
            vecteurDecl.push_back((InitDecl *) visit(ctx->initDecl(i)));
        }

        for (int i = 0; i < (ctx->instructionStruct()).size(); i++) {
            vecteurInstr.push_back((InstructionStruct *) visit(ctx->instructionStruct(i)));
        }
        return new Bloc(vecteurDecl, vecteurInstr);
    }

    virtual antlrcpp::Any visitBlocStruct(grammaireParser::BlocStructContext *ctx) override {
        cout << "visitBlocStruct" << endl;
        vector<InstructionStruct *> vecteurInstr;
        for (int i = 0; i < (ctx->instructionStruct()).size(); i++) {
            vecteurInstr.push_back((InstructionStruct *) visit(ctx->instructionStruct(i)));
        }
        return new BlocStruct(vecteurInstr);
    }

    virtual antlrcpp::Any visitParamDefinitionNonVide(grammaireParser::ParamDefinitionNonVideContext *ctx) override {
        cout << "visitParamDefinitionNonVide" << endl;
        vector<Parametre *> vecteurParam;
        for (int i = 0; i < (ctx->parametre()).size(); i++) {
            vecteurParam.push_back((Parametre *) visit(ctx->parametre(i)));
        }

        return new ParametreDefinition(vecteurParam);

    }

    virtual antlrcpp::Any visitParamDefinitionVide(grammaireParser::ParamDefinitionVideContext *ctx) override {
        cout << "visitParamDefinitionVide" << endl;
        return new ParametreDefinition();
    }

    virtual antlrcpp::Any visitParametreSimple(grammaireParser::ParametreSimpleContext *ctx) override {
        cout << "visitParametreSimple" << endl;
        return new Parametre(
                (Type) visit(ctx->type()),
                new Name(ctx->NAME()->getText()),
                false // hasBrackets
        );
    }

    virtual antlrcpp::Any visitParametreTab(grammaireParser::ParametreTabContext *ctx) override {
        cout << "visitParametreTab" << endl;
        return new Parametre(
                (Type) visit(ctx->type()),
                new Name(ctx->NAME()->getText()),
                true // hasBrackets
        );
    }

    virtual antlrcpp::Any visitIf(grammaireParser::IfContext *ctx) override {
        cout << "visitIf" << endl;
        return (StructureControle *) new StructureIf((Expr *) visit(ctx->expr()),
                                                     (BlocStruct *) visit(ctx->blocStruct()),
                                                     (ctx->elseBloc() != nullptr) ? (ElseBloc *) visit(ctx->elseBloc())
                                                                                  : nullptr
        );

    }

    virtual antlrcpp::Any visitWhile(grammaireParser::WhileContext *ctx) override {
        cout << "visitWhile" << endl;
        return (StructureControle *)
                new StructureWhile((Expr *) visit(ctx->expr()),
                                   (BlocStruct *) visit(ctx->blocStruct())
                );
    }

    virtual antlrcpp::Any visitElseBloc(grammaireParser::ElseBlocContext *ctx) override {
        cout << "visitElseBloc" << endl;
        ElseBloc *e = new ElseBloc((BlocStruct *) visit(ctx->blocStruct()));
        return e;
    }

    virtual antlrcpp::Any visitInt32(grammaireParser::Int32Context *ctx) override {
        cout << "visitInt32" << endl;
        return int32_type;
    }

    virtual antlrcpp::Any visitInt64(grammaireParser::Int64Context *ctx) override {
        cout << "visitInt64" << endl;
        return int64_type;
    }

    virtual antlrcpp::Any visitChar(grammaireParser::CharContext *ctx) override {
        cout << "visitChar" << endl;
        return char_type;
    }

    virtual antlrcpp::Any visitType_void(grammaireParser::Type_voidContext *ctx) override {
        cout << "visitType_void" << endl;
        return void_type;
    }


protected:
    MapperSymbol mapperSymbol;

};