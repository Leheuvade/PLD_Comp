#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>

#include "../visitor/MappingNameVisit.h"

#include "antlr4-runtime.h"
#include "../../grammaire/grammaireLexer.h"
#include "../../grammaire/grammaireImplBaseVisitor.h"
#include "../visitor/MappingNameVisit.h"

#include "dotexport.h"
#include "../visitor/StringOutput.h"
#include "../visitor/IRVisit.h"

using namespace antlr4;
int main(int argc, char *argv[]) {
   if (argc <= 1) {
        cout << "no program to compile, add file name after the executable in the command line" << endl;
        return 0;
    }
    std::ifstream t(argv[1]);
    std::string content((std::istreambuf_iterator<char>(t)),
                        std::istreambuf_iterator<char>());
    cout << content << endl;
    ANTLRInputStream input(content);
    grammaireLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    grammaireParser parser(&tokens);
    tree::ParseTree *tree = parser.programme();

    grammaireImplBaseVisitor visitor;
    Programme *p;
    p = visitor.visit(tree);
/* try {
   p = visitor.visit(tree);
 }catch (const std::exception& e) {
  cout<<e.what()<<endl;
  return -1;
 }*/



    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    DotExport dotexport(&parser);
    tree::ParseTreeWalker::DEFAULT.walk(&dotexport, tree);
    ofstream out;
    out.open("tmp.dot");
    out << dotexport.getDotFile();
    out.close();
    system("dot -Tpdf -o out.pdf tmp.dot");
    /*DebugVisit visit;
    cout << ((StringOutput*)p->accept(&visit))->getVal() << endl;*/
    MappingNameVisit visit;
    cout << ((StringOutput *) p->accept(&visit))->getVal() << endl;
	//passe le nom de fichier a IR
	IRVisit visitIR;
	visitIR.setInName(argv[1]);
	string outName = ((string)argv[1]).substr(0, ((string)argv[1]).find("."));
	visitIR.setOutName(outName+".s");

	p->accept(&visitIR);
    return 0;

}
