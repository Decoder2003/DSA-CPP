#include <iostream>
#include <queue>
using namespace std;

class Stack
{
private:
    queue<int> Q;

public:
    int top()
    {
        return Q.back();
    }
    void push(int val)
    {
        Q.push(val);
    }
    void pop()
    {
        queue<int> Qnew;   // new queue banayi
        if (Q.size() == 1) // agar size = 1? toh simply pop
        {
            Q.pop();
            return;
        }
        while (!Q.empty() && Q.size() != 1)
        {
            Qnew.push(Q.front()); // dusri queue mai dala except back or last element
            Q.pop();
        }
        Q.pop();              // lost the last element;
        while (!Qnew.empty()) // fir new queue ko purani queue mai
        {
            Q.push(Qnew.front());
            Qnew.pop();
        }
    }
    bool empty()
    {
        return Q.empty();
    }
    int size()
    {
        return Q.size();
    }
};

int main()
{
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    cout << S.top() << endl;
    S.pop();
    cout << S.top() << endl;
    S.push(30);
    cout << S.empty() << endl;
    cout << S.size() << endl;
    return 0;
}