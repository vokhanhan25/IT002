#include "expr.h"
#define MAXN 10000

CExpr::CExpr() {
    expr = "";
}

CExpr::CExpr(const string &st) {
    expr = st;
}

CExpr::~CExpr() {
    return;
}

int Precedence(char op){ 
    if(op == '+'||op == '-') 
    return 1; 
    if(op == '*'||op == '/') 
    return 2; 
    return 0; 
} 
  
int ApplyOp(int a, int b, char op){ 
    switch(op){ 
        case '+': return a + b; 
        case '-': return a - b; 
        case '*': return a * b; 
        case '/': return a / b; 
    } 
} 
  
int Evaluate(string tokens){ 
    int i; 
      
    stack <int> values; 
      
    stack <char> ops; 
      
    for(i = 0; i < tokens.length(); i++){ 
          
        if(tokens[i] == ' ') 
            continue; 
          
        else if(tokens[i] == '('){ 
            ops.push(tokens[i]); 
        } 

        else if(isdigit(tokens[i])){ 
            int val = 0; 
              
            while(i < tokens.length() &&  
                        isdigit(tokens[i])) 
            { 
                val = (val*10) + (tokens[i]-'0'); 
                i++; 
            } 
              
            values.push(val); 
        } 
          
        else if(tokens[i] == ')') 
        { 
            while(!ops.empty() && ops.top() != '(') 
            { 
                int val2 = values.top(); 
                values.pop(); 
                  
                int val1 = values.top(); 
                values.pop(); 
                  
                char op = ops.top(); 
                ops.pop(); 
                  
                values.push(ApplyOp(val1, val2, op)); 
            } 
              
            if(!ops.empty()) 
               ops.pop(); 
        } 
          
        else
        { 
            while(!ops.empty() && Precedence(ops.top()) 
                                >=Precedence(tokens[i])){ 
                int val2 = values.top(); 
                values.pop(); 
                  
                int val1 = values.top(); 
                values.pop(); 
                  
                char op = ops.top(); 
                ops.pop(); 
                  
                values.push(ApplyOp(val1, val2, op)); 
            } 
              
            ops.push(tokens[i]); 
        } 
    } 
      
    while(!ops.empty()){ 
        int val2 = values.top(); 
        values.pop(); 
                  
        int val1 = values.top(); 
        values.pop(); 
                  
        char op = ops.top(); 
        ops.pop(); 
                  
        values.push(ApplyOp(val1, val2, op)); 
    } 
      
    return values.top(); 
} 

double CExpr::Eval() {
    return Evaluate(expr);
}

