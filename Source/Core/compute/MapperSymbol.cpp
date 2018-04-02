/**
 * Project Untitled
 */


#include "MapperSymbol.h"
#include "../data/Programme.h"
#include "../data/init_decl/VarGlobaleDeclaration.h"
#include "../data/init_decl/VarGlobaleInitialisation.h"
#include "../data/Bloc.h"
#include "../data/Definitions/Definition.h"
#include "../data/init_decl/InstructionDeclaration.h"
#include "../data/init_decl/InstructionInit.h"

/**
 * MapperSymbol implementation
 */
MapperSymbol::MapperSymbol()
{
}



MapperSymbol::~MapperSymbol()
{


}

void MapperSymbol::addSymboleTable(grammaireParser::BlocContext * ctx, Bloc * bloc){
	blocs.insert(std::make_pair(ctx, bloc));
}
void MapperSymbol::setProgCtx(grammaireParser::ProgrammeContext * programme){
	this->programme = programme;
}

void MapperSymbol::test(Programme * p, grammaireParser::BlocContext * b)
{
	cout<<p->definitions[0]->name->name<<endl;
	Bloc * bll= blocs[b];

	blocs[b]->initDecl[0];
	cout<<"la"<<endl;
	//Declaration * d = (Declaration *)
	//cout<<d->name->name<<endl;
}

Symbole * MapperSymbol::findSymbol(Name* name, grammaireParser::EntreeContext* ctxCourant,
	grammaireParser::BlocContext* ctxBlocCourant)
{
	/*Programme * prog = ctxCourant->programme();
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
	if(ctxBlocCourant != nullptr){
		/*Bloc * bloc = ctxBlocCourant->bloc();
		for (int i = 0; i<bloc->initDecl.size(); i++)
		{
			InstructionDeclaration * varDecl = static_cast<InstructionDeclaration*>(bloc->initDecl[i]);
			if (varDecl)
			{
				if (varDecl->declaration->name->name == name->name)
				{
					return varDecl;
				}
			}
			else
			{
				InstructionInit * varInit = static_cast<InstructionInit*>(bloc->initDecl[i]);
				if (varInit->initialisation->name->name == name->name)
				{
					return varInit;
				}

			}
		}

	}*/
	return nullptr;
}
