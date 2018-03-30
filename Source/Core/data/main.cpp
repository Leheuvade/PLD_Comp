#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>

#include "antlr4-runtime.h"
#include "../../grammaire/grammaireLexer.h"
#include "../../grammaire/grammaireImplBaseVisitor.h"
#include "../../grammaire/grammaireMappingBaseVisitor.h"
#include "../../grammaire/grammaireParser.h"
#include "Programme.h"

#include "dotexport.h"

using namespace antlr4;

int titi;

void toto(){
  int clara;
}
int main(int , const char **) {

  std::ifstream t("programme.txt");
  std::string content((std::istreambuf_iterator<char>(t)),
                      std::istreambuf_iterator<char>());
  std::cout << content << endl;

  ANTLRInputStream input(content);
  grammaireLexer  lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  grammaireParser parser(&tokens);
  tree::ParseTree* tree = parser.programme();

  //grammaireImplBaseVisitor visitor;

  Programme * p = visitor.visit(tree);

  /*MapperSymbol ms;
  

  grammaireMappingBaseVisitor v;
  grammaireParser::BlocContext *ctx = v.visit(tree);
  //ctx->bloc();
  ms.test(p, ctx);*/

  
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
