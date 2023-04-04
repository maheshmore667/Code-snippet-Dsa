#include <bits/stdc++.h> 

 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


int KthsmallestElement(BinaryTreeNode<int>* root, int k, int &i) {
     if(root == NULL) {
        return -1;
    }

    int left = KthsmallestElement(root -> left,k,i);
    if(left != -1) {
        return left;
    } 
    i++;
    if(i == k) {
        return root -> data;
    }
    return KthsmallestElement(root -> right, k,i);
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i=0;
    return KthsmallestElement(root, k, i);

}