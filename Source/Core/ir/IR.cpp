#include "IR.h"
#include "../data/Definitions/Definition.h"

IRInstr::IRInstr(BasicBlock* bb_, Operation op, Type t, vector<string> params)
{
	bb = bb_;
	this->op = op;
	this->t = t;
	this->params = params;
}

void IRInstr::gen_asm(ostream& o)
{
	//TODO tenir compte du type
	o << "\t\t" << opToStr(op) << " ";
	for (int i = 0; i < params.size(); i++)
	{
		o << params[i];
		if(i<params.size()-1)
		{
			o << ',';
		}
	}
	o << endl;
}

string IRInstr::opToStr(Operation& o)
{
	switch (op)
	{
	case ldconst:
		return "ldconst";
	case add:
		return "add";

	case sub:
		return "sub";

	case mul:
		return "mul";

	case rmem:
		return "rmem";

	case wmem:
		return "wmem";

	case call:
		return "call";

	case cmp_eq:
		return "cmp_eq";

	case cmp_lt:
		return "cmp_lt";

	case cmp_le:
		return "cmp_le";
	case movq:
		return "movq";
	case leave:
		return "leave";
	case ret:
		return "ret";
	case cmpq:
		return "cmpq";
	case je:
		return "je";
	default:
		return "";
	}

}

BasicBlock::BasicBlock(CFG* cfg, string entry_label)
{
	this->cfg = cfg;
	this->label = entry_label;
	cfg->add_bb(this);
}

BasicBlock::~BasicBlock()
{
	for(int i = 0;i<instrs.size();i++)
	{
		delete instrs[i];
	}
}

void BasicBlock::gen_asm(ostream& o)
{
	o << "\t" << this->label << ":" << endl;
	for (int i = 0; i < instrs.size(); i++)
	{
		instrs[i]->gen_asm(o);
	}
	if(exit_true==this)
	{
		//cas de la boucle
		o << "\t\tjump " << exit_true->label << endl;
		exit_false->gen_asm(o);

	}
	else {
		if (exit_true && !exit_false) {
			o << "\t\tjump " << exit_true->label << endl;
		}//sinon les jumps sont gérés dans les visiteurs
		if (exit_true )
		{
			exit_true->gen_asm(o);
		}

		if (exit_false)
		{
			exit_false->gen_asm(o);
		}
	}
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params)
{
	instrs.push_back(new IRInstr(this, op, t, params));
}
int CFG::nextBBnumber = 0;
CFG::CFG(Definition* ast)
{
	this->ast = ast;
}

CFG::CFG()
{
}

CFG::~CFG()
{
	for(int i = 0;i<bbs.size();i++)
	{
		delete bbs[i];
	}
}

void CFG::add_bb(BasicBlock* bb)
{
	if (bb->label != "BLOC_" + to_string(nextBBnumber)) {
		bb->label += "_" + to_string(nextBBnumber);
	}
		bbs.push_back(bb);
		current_bb = bb;
		nextBBnumber++;
	
}


void CFG::gen_asm(ostream& o)
{
	o << ".file \"" << filename << "\"" << endl;
	o << ".text" << endl;
	o << ".globl " << ast->name->name << endl;
	o << ".type " << ast->name->name << ", @function" << endl;
	o << ast->name->name << ":" << endl;
	gen_asm_prologue(o);
	/*for(int i = 0;i<bbs.size();i++)
	{*/
		bbs[0]->gen_asm(o);
	//}
	gen_asm_epilogue(o);

}


string CFG::IR_reg_to_asm(string reg)
{
	int index = reg.rfind(OFFSET_TAG);
	if (index == string::npos)
	{
		cout << "error no offset in name: "<<reg << endl;
		return "";
	}

	return "-" + reg.substr(index + OFFSET_TAG.size()) + "(%rbp)";
}

void CFG::gen_asm_prologue(ostream& o)
{
	int size = nextFreeSymbolIndex;//on recupere la taille totale (dernier offset + 8)
	o << "\tpushq %rbp" << endl;//je sais pas ce que ca fait
	o << "\tmovq %rsp, %rbp" << endl;//deplace le rbp au niveau du rsp
	o << "\tsubq $" << size << ", %rsp" << endl;//decale le rsp de size. (allocation pour les var temp)

}

void CFG::gen_asm_epilogue(ostream& o)
{
	o << "\tleave" << endl;
	o << "\tret" << endl;
}



string CFG::add_to_symbol_table(string name, Type t)
{
	SymbolType.insert_or_assign(name, t);
	SymbolIndex.insert_or_assign(name, nextFreeSymbolIndex);
	name += OFFSET_TAG + to_string(nextFreeSymbolIndex);
	cout << "nouveau symbole: " << name << " " << nextFreeSymbolIndex << endl;
	nextFreeSymbolIndex += 8;//on ajoute 8 au prochain offset (pour passer � la prochaine case mem de 64bits)
	return name;//on renvoie le nom avec l'offset
}



string CFG::getNameOffset(string name)
{
	return name += OFFSET_TAG + to_string(get_var_index(name));
}


string CFG::create_new_tempvar(Type t)
{
	string name = "!tmp" + OFFSET_TAG + to_string(nextFreeSymbolIndex);//on cree une variable temporaire avec comme nom son offset
	add_to_symbol_table(name, t);//on l'ajoute
	return name;//on retourne ce nom
}

int CFG::get_var_index(string name)
{
	return SymbolIndex.at(name);
}

Type CFG::get_var_type(string name)
{
	return SymbolType.at(name);
}

string CFG::new_BB_name()
{
	return "BLOC_" + to_string(nextBBnumber);
}


BasicBlock * CFG::get_bb_by_name(string name)
{
	for (int i = 0; i < bbs.size(); i++) {
		if (bbs[i]->label == name) {
			return bbs[i];
		}
	}
	return nullptr;
}


