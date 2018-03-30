#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>

#include "antlr4-runtime.h"
#include "../../grammaire/grammaireLexer.h"
#include "../../grammaire/grammaireImplBaseVisitor.h"
#include "../../grammaire/grammaireParser.h"
#include "Programme.h"

#include "dotexport.h"

using namespace antlr4;
int titi;

void toto(){
  int clara;
}
int main(int , const char **) {

  /*std::ifstream t("programme.txt");
  std::string content((std::istreambuf_iterator<char>(t)),
                      std::istreambuf_iterator<char>());*/

  ANTLRInputStream input("void main(void){int32_t i;i=0;i=i+1;if(0){}else{}}");
  grammaireLexer  lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  grammaireParser parser(&tokens);
  tree::ParseTree* tree = parser.programme();

  grammaireImplBaseVisitor visitor;

  visitor.visit(tree);

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  DotExport dotexport(&parser);
  tree::ParseTreeWalker::DEFAULT.walk(&dotexport,tree);
  ofstream out;
  out.open("tmp.dot");
  out<<dotexport.getDotFile();
  out.close();
  system("dot -Tpdf -o out.pdf tmp.dot");

  return 0;
}
