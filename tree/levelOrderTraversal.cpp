#include <iostream>
#include <queue>
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

void levelOrderTraversal(TreeNode *root)
{
    queue<TreeNode *> Q;
    Q.push(root);

    while (!Q.empty())
    {
        TreeNode *current = Q.front();
        Q.pop();
        cout << current->val << " ";
        if (current->left != NULL)
        {
            Q.push(current->left);
        }

        if (current->right != NULL)
        {
            Q.push(current->right);
        }
    }
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
    levelOrderTraversal(root);
    return 0;
}