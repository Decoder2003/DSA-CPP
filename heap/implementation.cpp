#include <iostream>
using namespace std;

class Heap
{
public:
    int val;
    Heap *right;
    Heap *left;
    Heap(int val)
    {
        this->val = val;
        this->right = this->left = NULL;
    }
};

int main()
{
    return 0;
}