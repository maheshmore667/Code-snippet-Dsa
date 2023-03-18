#include<iostream>
#include <queue>
#include <stack>
using namespace std;

class Node {
    public :
      int data;
      Node* left;
      Node* right;

      Node(int d) {
        this -> data = d;
        this -> right = NULL;
        this -> left = NULL;
      }
};

Node* createBinaryTree(Node* root) {
    cout << "Enter the data: "  << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "Enter the data to left of " << data << endl;
    root -> left = createBinaryTree(root -> left);
    cout << "Enter the data to right of " << data << endl;
    root -> right = createBinaryTree(root -> right);

    return root;

}

void inorder(Node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root -> left);
    cout <<root -> data << " ";
     inorder(root -> right);
}

void postorder(Node* root) {
    if(root == NULL) {
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout <<root -> data << " ";
    
}

void preorder(Node* root) {
    if(root == NULL) {
        return;
    }
    cout <<root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void levelOrderTraversal(Node* root) {
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

void reverseOrderTraversal(Node* root) {
    if(!root) {
        return;
    }

    queue<Node*> q;
    stack<int> ans;

    q.push(root);                   
    while(!q.empty()) {
        Node* temp = q.front();
        ans.push(temp -> data);

        if(temp -> right) {
            q.push(temp -> right);
        }
        if(temp -> left) {
            q.push(temp -> left);
        }

        q.pop();
    }

    while(!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
}

int main() {
    Node* root = NULL;
    root = createBinaryTree(root);
    levelOrderTraversal(root);
    cout << "Reverse Level Order Traversal" << " " << endl;
    reverseOrderTraversal(root);

    cout << "inorder traversal is : " << endl;
    inorder(root);
    cout << endl;
    cout << "preorder traversal is : " << endl;
    preorder(root);
    cout << endl;
    cout << "postorder traversal is : " << endl;
    postorder(root);


    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    return 0;
}
