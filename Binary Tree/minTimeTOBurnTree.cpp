//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    Node* makeMapping(Node* root, int target, map<Node*, Node*> &nodeToParent) {
        queue<Node*> q;
        q.push(root);
        Node* res = NULL;
        nodeToParent[root] = NULL;
        while(!q.empty()) {
           Node* frontNode = q.front();
           q.pop();
           
           if(frontNode -> data == target){
               res = frontNode;
           }
           
           if(frontNode -> left) {
                nodeToParent[frontNode -> left] = frontNode;
                q.push(frontNode -> left);
           }
           if(frontNode -> right) {
                nodeToParent[frontNode -> right] = frontNode;
                q.push(frontNode -> right);
           }
        }
        return res;
    }
    
    int burnTree(Node* root, map<Node*, Node*> nodeToParent) {
        queue<Node*> q;
        q.push(root);
        map<Node*, bool> visited;
        visited[root] = true;
        int ans = 0;
        while(!q.empty()){
            bool flag = false;
            int size = q.size();
            for(int i=0; i< size; i++) {
                Node* front = q.front();
                q.pop();
                if(front -> left && !visited[front -> left]) {
                    flag = true;
                    visited[front -> left] = true;
                    q.push(front->left);
                }
                if(front -> right && !visited[front -> right]) {
                    flag = true;
                    visited[front -> right] = true;
                    q.push(front->right);
                }
                if(!visited[nodeToParent[front]] && nodeToParent[front]) {
                    flag = true;
                    visited[nodeToParent[front]] = true;
                    q.push(nodeToParent[front]);
                }
            }
            if(flag) {
                ans++;
            }
            
        }
        
        return ans;
    } 
    
    int minTime(Node* root, int target) 
    {
        map<Node*, Node*> nodeToParent;
        Node* targetNode = makeMapping(root, target, nodeToParent);
        return burnTree(targetNode, nodeToParent);
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends