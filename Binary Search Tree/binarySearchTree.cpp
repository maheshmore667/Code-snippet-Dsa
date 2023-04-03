#include<iostream>
#include<queue>

using namespace std;
class Node {
    public :
      int data;
      Node* left;
      Node* right;

      Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
      }
};

Node* createBST(Node* &root, int data) {
    if(root == NULL) {
        root = new Node(data);
        return root;
    }

    if(data > root -> data) {
        root -> right = createBST(root -> right, data);
    }
    if(data < root -> data) {
        root -> left = createBST(root -> left, data);
    }
    return root;
}

void takeInput(Node* &root) {
    int data;
    cin >> data;
    while(data != -1) {
       root = createBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node* &root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        
        Node* temp = q.front();
      
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        } else {
              cout << temp -> data << " ";
             if(temp -> left) {
                q.push(temp -> left);
            } 
            if(temp -> right) {
                q.push(temp -> right);
            }
        }

        
    }
}

void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
}

int minValue(Node* root) {
    Node* temp = root;
    while(temp -> left != NULL) {
        temp = temp -> left;
    }
    cout<< endl << "Min value of BST : " << temp -> data << endl;
    return temp -> data;
}

void maxValue(Node* root) {
    Node* temp = root;
    while(temp -> right != NULL) {
        temp = temp -> right;
    }
    cout<< endl << "Max value of BST : " << temp -> data << endl;
}

Node* deleteFromBST(Node* root, int value) {
    if(!root) {
        return NULL;
    }
    if(root -> data == value) {
        if(root -> right == NULL && root -> left == NULL) {
        return NULL;
    }
    if(root -> right == NULL && root -> left != NULL) {
        Node* temp = root -> left;
        delete root;
        return temp;
    }
    if(root -> right != NULL && root -> left == NULL) {
        Node* temp = root -> right;
        delete root;
        return temp;
    }
    if(root -> right != NULL && root -> left != NULL) {
        int mini = minValue(root->right);
        root -> data = mini;
        root -> right = deleteFromBST(root -> right, mini);
        return root;
    }
    }
    


    if(root -> data > value) {
        root -> left= deleteFromBST(root -> left, value);
        return root;
    } else {
        root -> right = deleteFromBST(root -> right, value);
        return root;
    }
}

int inorderPredecessor(Node *root)
{ 
     if(!root) return -1;
    Node *temp = root;
    if (temp->right)
    {
        while (temp->right)
        {
            temp = temp->right;
        }
    }
    return temp -> data;
}

int inorderSuccessor(Node* root) {
    if(!root) return -1;
    Node* temp = root;
    if(temp -> left) {
        while(temp -> left) {
            temp = temp -> left;
        }
    }
    return temp -> data;
}

bool elementPresent(Node* root, int x) {
    Node* temp = root;
    while(temp) {
        if(temp -> data == x) {
            cout << "Inorder Predecessor is : " << inorderPredecessor(temp -> left) << endl;
            cout << "Inorder Sucessor is : " << inorderSuccessor(temp -> right) << endl;
            return true;
        }
        if(temp -> data < x) {
            temp = temp -> right;
        }
        else {
            temp = temp -> left;
        }
    }
    return false;
}



int main() {
    Node* root = NULL;
    cout<< "Enter the data for the BST :" << endl;
    takeInput(root);
    levelOrderTraversal(root);
   /*  cout << "Inorder traversal : " << endl;
    inOrder(root);
    cout << endl;
    cout << "Preorder traversal : " << endl;
    preOrder(root);
    cout << endl;
    cout << "Postorder traversal : " << endl;
    postOrder(root);
    minValue(root);
    maxValue(root); */
    /* cout << " Search element to find" << endl;
    int x;
    cin >> x;
    cout<< "Element is present : " << elementPresent(root,x); */

    root = deleteFromBST(root, 19);
    levelOrderTraversal(root);
    
    return 0;
}