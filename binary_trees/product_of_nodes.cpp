#include<bits/stdc++.h>
using namespace std;

// Tree Node Creation
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

// Printing the Tree
void displayTree(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

// function to compute sum of nodes of binary tree using recursion
int product(TreeNode* root){
    if(root==NULL) return 1;
    return root->val*product(root->left)*product(root->right);
}

int main(){

    TreeNode* a = new TreeNode(-1); // Root Node
    TreeNode* b = new TreeNode(-2);
    TreeNode* c = new TreeNode(-1);
    TreeNode* d = new TreeNode(-2);
    TreeNode* e = new TreeNode(-1);
    TreeNode* f = new TreeNode(-3);
    TreeNode* g = new TreeNode(2);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    displayTree(a);
    cout<<endl;
    cout<<"Product of nodes this tree is : "<<product(a);

}