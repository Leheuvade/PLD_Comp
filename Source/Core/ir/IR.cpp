#include "IR.h"

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
	o << opToStr(op) << " ";
	for (int i = 0; i < params.size(); i++)
	{
		o << params[i];
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
	default:
		return "";
	}

}

BasicBlock::BasicBlock(CFG* cfg, string entry_label)
{
	this->cfg = cfg;
	this->label = entry_label;
}

void BasicBlock::gen_asm(ostream& o)
{
	o << "#debut bloc: " << this << endl;
	for (int i = 0; i < instrs.size(); i++)
	{
		instrs[i]->gen_asm(o);
	}
	o << "#fin bloc: " << this << endl;

}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params)
{
	instrs.push_back(new IRInstr(this, op, t, params));
}

CFG::CFG(Definition* ast)
{
	this->ast = ast;
}

void CFG::add_bb(BasicBlock* bb,int index)
{
	if (index == -1 || index >= bbs.size()) {
		bbs.push_back(bb);
		current_bb = bb;
		nextBBnumber++;
	}else
	{
		vector<BasicBlock*>::iterator here = bbs.begin() + index;
		bbs.insert(here, bb);
		current_bb = bb;
		nextBBnumber++;
	}
}

void CFG::gen_asm(ostream& o)
{
	//TODO add transition between blocks

	o << "#debut cfg: " << this << endl;
	
	for (int i = 0; i < bbs.size(); i++)
	{
		bbs[i]->gen_asm(o);
	}
	o << "#fin cfg: " << this << endl;
}


string CFG::IR_reg_to_asm(string reg)
{
	int index = reg.rfind(OFFSET_TAG);
	if (index == string::npos)
	{
		cout << "error no offset in name" << endl;
		return "";
	}

	return "-" + reg.substr(index + OFFSET_TAG.size()) + "(%rbp)";
}

void CFG::gen_asm_prologue(ostream& o)
{
	int size = nextFreeSymbolIndex;//on recupere la taille totale (dernier offset + 8)
	o << "pushq %rbp" << endl;//je sais pas ce que ca fait
	o << "movq %rsp, %rbp" << endl;//deplace le rbp au niveau du rsp
	o << "subq $" << size << ", %rsp" << endl;//decale le rsp de size. (allocation pour les var temp)

}

void CFG::gen_asm_epilogue(ostream& o)
{
	o << "leave" << endl;
	o << "ret" << endl;
}

string CFG::add_to_symbol_table(string name, Type t)
{
	name += OFFSET_TAG + to_string(nextFreeSymbolIndex);
	cout << "nouveau symbole: " << name << " " << nextFreeSymbolIndex << endl;
	SymbolType.insert_or_assign(name, t);
	SymbolIndex.insert_or_assign(name, nextFreeSymbolIndex);
	nextFreeSymbolIndex += 8;//on ajoute 8 au prochain offset (pour passer � la prochaine case mem de 64bits)
	return name;//on renvoie le nom avec l'offset
}

string CFG::getNameOffset(string name)
{
	return name += OFFSET_TAG + to_string(get_var_index(name));
}


string CFG::create_new_tempvar(Type t)
{
	string name = "!tmp" + to_string(nextFreeSymbolIndex);//on cree une variable temporaire avec comme nom son offset
	add_to_symbol_table(name, t);//on l'ajoute
	return name;//on retourne ce nom
}

int CFG::get_var_index(string name)
{
	return SymbolIndex.find(name)->second;
}

Type CFG::get_var_type(string name)
{
	return SymbolType.at(name);
}

string CFG::new_BB_name()
{
	return "Bloc: " + to_string(nextBBnumber);
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


