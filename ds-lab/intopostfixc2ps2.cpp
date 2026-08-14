# include <iostream>
# include <stack>
# include <string>
using namespace std;

int precedence(int c){
    //if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

string infixtoPostfix(string exp){
    stack<char> st;
    string op = "";

    for ( int i = 0; i < exp.length(); i ++){    // scan exp l to r
        char c = exp[i];

        if(isdigit(c)){                          // if c is a gdigit then add to o/p
            op += c;
        }
        else if(c =='('){
            st.push(c);
        }
        else if(c ==')'){
            while(st.top() != '(' ){
                op += st.top();   //pop from the stack and add to output until you hit a (
                st.pop();
            }      
            st.pop();  //Discard parentheses
        }
        else{
            while(!st.empty() && st.top() != '(' && precedence(st.top()) >= precedence(c)){
                op += st.top();
                st.pop();
            }
            st.push(c);
        }
        
    }
    while (!st.empty()) {
        op += st.top();
        st.pop();
    }
    return op;
}


int main(){
    string exp;
    cout << "Whats the expression:" << endl;
    cin >> exp;
    cout << infixtoPostfix(exp) << endl;

    return 0;
}