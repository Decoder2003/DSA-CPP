#include <iostream>
using namespace std;

class Stack
{
public:
    int topOfStack = -1;
    int stack[10];

    void push(int val)
    {
        topOfStack++;
        stack[topOfStack] = val;
    }
    int top()
    {
        return stack[topOfStack];
    }
    void pop()
    {
        topOfStack--;
    }
    int size()
    {
        return topOfStack + 1;
    }
    bool empty()
    {
        if (topOfStack == -1)
            return true;
        return false;
    }
};

int main()
{
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);

    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    return 0;
}