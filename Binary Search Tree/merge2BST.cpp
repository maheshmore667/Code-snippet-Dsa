#include <bits/stdc++.h> 


    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

void saveInorder(TreeNode<int> *root, vector<int> &ans) {
    if(root == NULL) {
        return;
    }
    saveInorder(root -> left,ans);
    ans.push_back(root -> data);
    saveInorder(root -> right,ans);
}
vector<int> mergeArray(vector<int> v1, vector<int> v2) {
    vector<int> v3;
    int i=0; 
    int j=0; 
    int k=0;
    while(i < v1.size() && j < v2.size()) {
        if(v1[i] < v2[j]) {
            v3.push_back(v1[i++]);
            
        } else {
             v3.push_back(v2[j++]);
           
        }
    }
    while(i < v1.size()) {
         v3.push_back(v1[i++]);
           
    } 
    while(j < v2.size()) {
         v3.push_back(v2[j++]);
    }

    return v3;
}
TreeNode<int>* createBst(vector<int> in, int start, int end) {
    
    if(start > end) {
        return NULL;
    }
    int mid = (start + end)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root -> left = createBst(in, start, mid-1);
    root -> right = createBst(in, mid+1, end);
    return root;
} 

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    vector<int> v1;
    vector<int> v2;
    saveInorder(root1, v1);
    saveInorder(root2, v2);

    vector<int> mergedArray = mergeArray(v1, v2);
    int start = 0;
    int end = mergedArray.size()-1;

    return createBst(mergedArray, start, end);

}