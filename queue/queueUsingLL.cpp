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

class Queue
{
public:
    Node *start;
    Node *end;
    int size = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (size == 0)
            start = end = newNode;
        else
        {
            end->next = newNode;
            end = newNode;
        }
        size++;
    }
    void pop()
    {
        if (size == 0)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node *temp = start;
        start = start->next;
        delete (temp);
        size--;
        if (size == 0)
            end = NULL;
    }
    int front()
    {
        if (size == 0)
        {
            cout << "Queue is empty!" << endl;
            return -1; // Return an error value when the queue is empty
        }
        return start->val;
    }

    int back()
    {
        if (size == 0)
        {
            cout << "Queue is empty!" << endl;
            return -1; // Return an error value when the queue is empty
        }
        return end->val;
    }
    int empty() { return size == 0 ? 1 : 0; }
};

int main()
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(5);
    Q.push(1);
    Q.push(4);
    Q.push(10);

    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    cout << endl;
    Q.pop();

    return 0;
}