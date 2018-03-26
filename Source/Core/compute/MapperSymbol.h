/**
 * Project Untitled
 */


#pragma once

#include <vector> 
#include "../data/init_decl/Symbole.h"
#include "../../grammaire/grammaireParser.h"


class Name;
using namespace std;
class MapperSymbol {
public: 
	MapperSymbol();
	virtual ~MapperSymbol();
	Symbole * checkSymbol(Name * name, grammaireParser::ProgrammeContext *ctxCourant, grammaireParser::BlocContext *ctxBlocCourant);
};

