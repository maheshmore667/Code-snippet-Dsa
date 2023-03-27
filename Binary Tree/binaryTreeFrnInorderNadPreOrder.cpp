//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    void makeMapping(int in[], int size, map<int, int> &nodeToIndex) {
        for(int i=0; i<size; i++) {
            nodeToIndex[in[i]] = i;
        }
    }
    
    Node* solve(int in[], int pre[], int n, int index, int inOrderStart,
    int inOrderend, map<int, int> nodeToIndex) {
        
        // base condition
        if(index >= n || inOrderStart > inOrderend) {
            return NULL;
        }
       
        
        int element = pre[index++];
        Node* root = new Node(element);
        int position = nodeToIndex[element];
        
        root -> left = solve(in, pre, n, index, inOrderStart, position-1, nodeToIndex);
        root -> right = solve(in, pre, n, index, position+1,  inOrderend, nodeToIndex);
        
        return root;
        
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {   
        map<int, int> nodeToIndex;
        makeMapping(in, n, nodeToIndex);
        Node* root = solve(in, pre, n, 0, 0, n-1, nodeToIndex);
        return root;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends