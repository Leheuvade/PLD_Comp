/**
 * Project Untitled
 */


#pragma once

#include <vector> 
#include "../data/init_decl/Symbole.h"
#include "../../grammaire/grammaireParser.h"
#include "../data/Bloc.h"
#include "../data/Programme.h"
#include <map>

class Name;
using namespace std;
class MapperSymbol {
friend class DebugVisit; 
 public: 
  
	MapperSymbol();
	virtual ~MapperSymbol();
	Symbole * findSymbol(Name * name, grammaireParser::EntreeContext *ctxCourant, grammaireParser::BlocContext *ctxBlocCourant);
	void addSymboleTable(grammaireParser::BlocContext * ctx, Bloc * bloc);
	void setProgCtx(grammaireParser::ProgrammeContext * programme);
	void test(Programme * p, grammaireParser::BlocContext * b);
protected:
	map<grammaireParser::BlocContext *, Bloc *> blocs;
	grammaireParser::ProgrammeContext * programme;
};

