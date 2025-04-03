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
int minOftree(TreeNode* root){
    if(root==NULL) return INT_MAX;
    int lrmin=min(minOftree(root->left),minOftree(root->right));
    return min(root->val,lrmin);
}

int main(){

    TreeNode* a = new TreeNode(1); // Root Node
    TreeNode* b = new TreeNode(-299);
    TreeNode* c = new TreeNode(-3);
    TreeNode* d = new TreeNode(34);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(47);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    displayTree(a);
    cout<<endl;
    cout<<"Minimum of this tree is : "<<minOftree(a);

}