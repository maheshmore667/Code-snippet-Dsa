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

class info {
    public : 
    int mini;
    int maxi;
    bool isBST;
    int size;
};

info solve(TreeNode<int>* root, int &ans) {
    if(root == NULL) {
        return {INT_MAX, INT_MIN, true, 0};
    }

    info left = solve(root -> left, ans);
    info right = solve(root -> right, ans);

    info currentNode ;
    currentNode.maxi = max(root -> data, right.maxi);
    currentNode.mini = min (root -> data, left.mini);
    currentNode.size = left.size + right.size + 1;

    if(left.isBST && right.isBST && (root -> data > left.maxi && root -> data < right.mini)) {
        currentNode.isBST = true;
    } else {
         currentNode.isBST = false;
    }

    if(currentNode.isBST) {
        ans = max(ans, currentNode.size);
    }
    return currentNode;
}

int largestBST(TreeNode<int>* root) 
{   int ans = 0;
    info temp = solve(root, ans);
    return ans;
}
