#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Stack
{
public:
    int size = 0;
    Node *Top;

    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = Top;
        Top = newNode;
        size++;
    }
    void pop()
    {
        if (size == 0)
            cout << "Stack underflow!" << endl;
        else
        {
            Node *temp = Top;
            Top = Top->next;
            delete (temp);
            size--;
        }
    }
    int top()
    {
        return Top->val;
    }
    int empty()
    {
        return size == 0 ? 1 : 0;
    }
};

int main()
{
    Stack S;
    S.push(10);
    S.push(11);
    S.push(12);

    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    cout << endl;
    S.pop();
    S.top();

    return 0;
}