
    

    template <typename T>
    class TreeNode
    {
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };


void processInorder(TreeNode<int>* root,  vector<int> &in) {
    if(root == NULL) {
        return;
    }
    processInorder(root -> left, in);
    in.push_back(root -> data);
     processInorder(root -> right, in);
}

TreeNode<int>* inorderToBalacedBST(int start, int end,
vector<int> &in) {
    if(start > end) {
        return NULL;
    }
    int mid = start + (end -start) /2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root -> left = inorderToBalacedBST(start, mid-1,in);
    root -> right = inorderToBalacedBST(mid+1, end, in);
    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int> in;
    processInorder(root, in);
    return inorderToBalacedBST(0, in.size()-1, in);
}
