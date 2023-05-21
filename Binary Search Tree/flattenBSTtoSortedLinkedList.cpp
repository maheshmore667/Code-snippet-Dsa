#include <bits/stdc++.h> 

    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };


void processInorder(TreeNode<int>* root,  vector<int> &in) {
    if(root == NULL) return;
    processInorder(root -> left, in);
    in.push_back(root -> data);
    processInorder(root -> right, in);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> in;
    processInorder(root, in);
    int i=0;
    int j = in.size();
    TreeNode<int>* newRoot = new TreeNode<int>(in[i]);
    TreeNode<int>* curr = newRoot;
    i++;
    while(i < j){
        TreeNode<int>* temp = new TreeNode<int>(in[i]);
        curr -> left = NULL;
        curr -> right = temp;
        curr = temp;
        i++;
    }
    curr -> left = NULL;
    curr -> right = NULL;
    return newRoot;
}
