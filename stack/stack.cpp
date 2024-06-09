#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.pop();
    stack.push(40);
    stack.push(50);

    cout << stack.top() << endl;
    return 0;
}