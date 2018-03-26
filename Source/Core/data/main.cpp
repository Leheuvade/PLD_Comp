#include <iostream>

#include "antlr4-runtime.h"
#include "../../grammaire/grammaireLexer.h"
#include "../../grammaire/grammaireParser.h"
#include "Programme.h"

#include "dotexport.h"

using namespace antlr4;

int main(int , const char **) {
  ANTLRInputStream input("1+3");
  grammaireLexer  lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  grammaireParser parser(&tokens);
  tree::ParseTree* tree = parser.expr();

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  DotExport dotexport(&parser);
  tree::ParseTreeWalker::DEFAULT.walk(&dotexport,tree);
  ofstream out;
  out.open("tmp.dot");
  out<<dotexport.getDotFile();
  out.close();
  system("dot -Tpdf -o out.pdf tmp.dot");

  
  cout<<"toto";
  return 0;
}
