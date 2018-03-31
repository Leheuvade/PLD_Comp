#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>

#include "antlr4-runtime.h"
#include "../../grammaire/grammaireLexer.h"
#include "../../grammaire/grammaireImplBaseVisitor.h"
#include "../visitor/DebugVisit.h"

#include "../../grammaire/grammaireParser.h"
#include "Programme.h"

#include "dotexport.h"

using namespace antlr4;

int main(int argc, char *argv[]) {
	if(argc<=1)
	{
		cout << "no program to compile, add file name after the executable in the command line" << endl;
		return 0;
	}
	std::ifstream t(argv[1]);
	std::string content((std::istreambuf_iterator<char>(t)),
						std::istreambuf_iterator<char>());
	cout << content << endl;
	ANTLRInputStream input("int32_t i2=0;");
	grammaireLexer  lexer(&input);
	CommonTokenStream tokens(&lexer);

	tokens.fill();
	for (auto token : tokens.getTokens()) {
		std::cout << token->toString() << std::endl;
	}

	grammaireParser parser(&tokens);
	tree::ParseTree* tree = parser.programme();

	grammaireImplBaseVisitor visitor;

	Programme * p = visitor.visit(tree);

	std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

	DotExport dotexport(&parser);
	tree::ParseTreeWalker::DEFAULT.walk(&dotexport, tree);
	ofstream out;
	out.open("tmp.dot");
	out << dotexport.getDotFile();
	out.close();
	//system("dot -Tpdf -o out.pdf tmp.dot");
	DebugVisit visit;
	visit.visit(p);
	return 0;
}
