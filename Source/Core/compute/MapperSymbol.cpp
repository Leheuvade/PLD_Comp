/**
 * Project Untitled
 */


#include "MapperSymbol.h"
#include "../data/Programme.h"
#include "../data/init_decl/VarGlobaleDeclaration.h"
#include "../data/init_decl/VarGlobaleInitialisation.h"
#include "../data/Bloc.h"

/**
 * MapperSymbol implementation
 */
MapperSymbol::MapperSymbol()
{
}



MapperSymbol::~MapperSymbol()
{
	

}

Symbole* MapperSymbol::checkSymbol(Name* name, grammaireParser::ProgrammeContext* ctxCourant,
	grammaireParser::BlocContext* ctxBlocCourant)
{
	Programme * prog=ctxCourant->programme();
	for(int i = 0;i<prog->varGlobales.size();i++)
	{
		VarGlobaleDeclaration * varDecl = static_cast<VarGlobaleDeclaration*>(prog->varGlobales[i]);
		if(varDecl)
		{
			if(varDecl->declaration->name->name==name->name)
			{
				return varDecl;
			}
		}else
		{
			VarGlobaleInitialisation * varInit = static_cast<VarGlobaleInitialisation*>(prog->varGlobales[i]);
			if (varInit->initialisation->name->name == name->name)
			{
				return varInit;
			}

		}
	}
	Bloc * bloc = ctxBlocCourant->bloc();
	for (int i = 0; i<bloc->initDecl.size(); i++)
	{
		VarGlobaleDeclaration * varDecl = static_cast<VarGlobaleDeclaration*>(prog->varGlobales[i]);
		if (varDecl)
		{
			if (varDecl->declaration->name->name == name->name)
			{
				return varDecl;
			}
		}
		else
		{
			VarGlobaleInitialisation * varInit = static_cast<VarGlobaleInitialisation*>(prog->varGlobales[i]);
			if (varInit->initialisation->name->name == name->name)
			{
				return varInit;
			}

		}
	}


}
