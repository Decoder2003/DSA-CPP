#include <iostream>
#include <stack>
using namespace std;

bool valid(string s){
    stack<char> stack;
    int n = s.length();
    for(int i=0; i<n; i++){
        if( s[i]=='(' || s[i]=='[' || s[i]=='{') stack.push(s[i]);
        else{
            if(!stack.empty()){
                if(stack.top()=='(' && s[i]==')') stack.pop();
                else if(stack.top()=='[' && s[i]==']') stack.pop();
                else if(stack.top()=='{' && s[i]=='}') stack.pop();
                else return 0;
            }
        }
    }
    return stack.empty();
}

int main(){
    string s = "()[]{}";
    cout << valid(s) << endl;
    return 0;
}