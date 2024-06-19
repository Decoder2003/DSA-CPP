#include <iostream>
using namespace std;

// Node creation [Left-child, data , right child]
class TreeNode{
    public:
        int val;
        TreeNode *left, *right;
    TreeNode(int val){
        this->val = val;
        this->left = this->right = NULL; 
    }
};

TreeNode* buildTree(TreeNode* root){
    int data;
    cout << "Enter the data : "; cin >> data;
    root = new TreeNode(data);

    if(data==-1){
        return NULL;
    }

    cout << "Enter data for inserting in left of  " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in the right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

int main(){
    TreeNode* root = NULL;
    root = buildTree(root);
    return 0;
}