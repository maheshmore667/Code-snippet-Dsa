/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
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
    
***********************************************************/
void postOrderTraversal(BinaryTreeNode<int> *root, int &count) {
    if(root == NULL) {  
        return;
    }
    postOrderTraversal(root-> left,count);
    postOrderTraversal(root-> right,count);
    if(root -> left == NULL && root -> right == NULL) {
        count++;
    }
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count = 0;
    postOrderTraversal(root, count);
    return count;
}