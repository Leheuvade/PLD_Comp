
// Generated from grammaire.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "grammaireBaseVisitor.h"

using namespace std;



/**
* This class provides an empty implementation of grammaireVisitor, which can be
* extended to create a visitor which only needs to handle a subset of the available methods.
*/
class  grammaireMappingBaseVisitor : public grammaireBaseVisitor {
 public: 

	virtual antlrcpp::Any visitBloc(grammaireParser::BlocContext *ctx) override {
 		return ctx;
	}
};