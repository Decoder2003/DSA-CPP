#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

public:
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
    Node() {}
};

int main()
{
    Node head(10);
    Node *newNode = new Node(20);
    cout << head.val << endl;
    cout << newNode->val << endl;
    return 0;
}