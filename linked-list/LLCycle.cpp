#include <iostream>
#include <unordered_set>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Solution
{
public:
    // worked on leetcode
    bool hasCycle(ListNode *head)
    {
        unordered_set<ListNode *> S;

        while (head != NULL)
        {
            if (S.find(head) != S.end())
                return true;
            S.insert(head);
            head = head->next;
        }
        return false;
    }
};

int main()
{
    cout << "Compiled succesfully!" << endl;
    return 0;
}