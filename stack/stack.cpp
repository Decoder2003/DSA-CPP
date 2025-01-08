#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack; // Create a stack holding integers
    stack.push(10);   // add 10 to top of the stack : [10]
    stack.push(20);   // add 20 to top of the stack : [10,20]
    stack.push(30);   // add 30 to top of the stack : [10,20,30]
    stack.pop();      // remove top element i.e -30 no stack : [10,20]
    stack.push(40);   // add 20 to top of the stack : [10,20,40]
    stack.push(50);   // add 20 to top of the stack : [10,20,40,50]

    cout << stack.top() << endl; // display the top element of the stack i.e : 50
    return 0;
}