 #include "IR.h"

IRInstr::IRInstr(BasicBlock* bb_, Operation op, Type t, vector<string> params)
{
}

void IRInstr::gen_asm(ostream& o)
{
}

BasicBlock::BasicBlock(CFG* cfg, string entry_label)
{
}

void BasicBlock::gen_asm(ostream& o)
{
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params)
{
}
