#include <iostream>
using namespace std;

class treeNode
{
public:
    int val;
    treeNode *left, *right;
    treeNode(int val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }
};

void preOrderTraversal(treeNode *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // recursive case
    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(treeNode *root)
{
    // base case
    if (root == NULL)
        return;
    // recursive case
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(treeNode *root)
{
    // base case
    if (root == NULL)
        return;
    // recursive case
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->val << " ";
}

int main()
{
    treeNode *root = new treeNode(1);
    root->left = new treeNode(2);
    root->right = new treeNode(3);
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);

    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    return 0;
}