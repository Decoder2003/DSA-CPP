#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }
};

void preOrderTraversal(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// preOrderinput
TreeNode *inputTree()
{
    int val;
    // cout << "Enter value (-1 for null) : ";
    cin >> val;

    if (val == -1)
        return NULL;

    TreeNode *node = new TreeNode(val);
    // cout << "Enter left child of " << val << ":\n";
    node->left = inputTree();
    // cout << "Enter right child of " << val << ":\n";
    node->right = inputTree();

    return node;
}

int main()
{
    TreeNode *root = inputTree();
    preOrderTraversal(root);
    return 0;
}