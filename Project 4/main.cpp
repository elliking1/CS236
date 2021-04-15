//
//  main.cpp
//  Project4
//
//  Created by Cam on 3/26/19.
//  Copyright © 2019 Cam Brown. All rights reserved.
//

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Token.h"
#include "Scanner.h"
#include "Parser.h"
#include "Interpreter.h"

using namespace std;

int main(int argc, char* argv[]){
    string fileName = argv[1];
    Scanner myScanner(fileName);
    myScanner.scan();
    vector<Token> tokenVector = myScanner.getVector();
    Parser myParser(tokenVector);
    myParser.parse();
    DatalogProgram data = myParser.getData();
    Interpreter myInterpreter(data);
    myInterpreter.evalAllRules();
    myInterpreter.evalAllQueries();
    return 0;
}
