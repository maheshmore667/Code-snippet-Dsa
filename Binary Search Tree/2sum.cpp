#include <bits/stdc++.h> 

class BinaryTreeNode {
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

void inOrderProcess(BinaryTreeNode<int>* root, vector<int>&in){
    if(root == NULL) return ;
    inOrderProcess(root -> left, in);
    in.push_back(root -> data);
    inOrderProcess(root -> right, in);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> inOrderVal;
    inOrderProcess(root, inOrderVal);
    int i = 0;
    int j = inOrderVal.size()-1;
    while(i < j) {
        int sum = inOrderVal[i] + inOrderVal[j];
        if(sum == target) {
            return true;
        }
        else if(sum > target) {
            j--;
        } else {
            i++;
        }

    }
    return false;

}