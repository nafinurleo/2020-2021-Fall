#include <iostream>
#include <stack>
using namespace std;

int getPrecedence (char c){
   int pre=0;
   switch (c){
      case '+':
        pre =1;
        break;
      case '-':
        pre =1;
        break;
      case '*':
        pre =2;
        break;
      case '/':
        pre =2;
        break;
   }
   return pre;
}

int main()
{
    string s = "2*6/(4-1)+5*3";
    string postfix="";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if(c>= '0' && c<='9'){
            postfix.push_back(c);
        }
        else{
            if(c == '(') st.push(c);
            else if(c == ')'){
                while(st.top() != '('){
                        postfix.push_back(st.top());
                        st.pop();
                      }
                      st.pop();
            }
            else{
                if(!st.empty() && getPrecedence(c) <= getPrecedence (st.top())){
                    postfix.push_back(st.top());
                    st.pop();

                }

                    st.push(c);
            }
        }
    }

     while (!st.empty()){
             postfix.push_back(st.top());
             st.pop();
        }

    cout <<postfix;
}
