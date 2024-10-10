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

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// driver code
int main()
{
    int n;
    cin >> n;

    int val;
    cin >> val;
    Node *head = new Node(val);
    Node *newNode = head;
    for (int i = 1; i < n; i++)
    {
        cin >> val;
        newNode->next = new Node(val);
        newNode = newNode->next;
    }

    // operations
    display(head);
    return 0;
}