//
//  Parser.h
//  Project2
//
//  Created by Cam on 2/6/19.
//  Copyright © 2019 Cam Brown. All rights reserved.
//

#ifndef Parser_h
#define Parser_h

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <string>
#include "Token.h"
#include "DatalogProgram.h"

using namespace std;

class Parser {
public:
    Parser(vector<Token> vector);
    ~Parser();
    
    void parse();
    void match(TokenType t);
    void scheme();
    void schemeList();
    void idList();
    void fact();
    void factList();
    void stringList();
    void rule();
    void ruleList();
    void query();
    void queryList();
    Predicate headPredicate();
    Predicate predicate();
    void predicateList();
    Parameter parameter();
    void parameterList();
    string expression();
    string operate();
    
    vector<Token> getTokenVector();
    DatalogProgram getData();
    Predicate getPredicate();;
    Rule getRule();
    
    
private:
    Token current;
    vector<Token> tokenVector;
    DatalogProgram data;
    Predicate p;
    Rule r;
};


#endif // Parser_h
