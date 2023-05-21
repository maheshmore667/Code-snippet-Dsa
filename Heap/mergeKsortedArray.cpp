#include <bits/stdc++.h> 

class node {
    public : 
     int data;
     int row;
     int col;
     node(int data, int row, int col) {
         this -> data = data;
         this -> row = row;
         this -> col = col;
     }
};

class compare {
    public : 
    bool operator()(node* a, node* b) {
        return a->data > b->data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<node*, vector<node*>, compare> mini;
    for(int i=0; i<k; i++){
        node* temp = new node(kArrays[i][0], i, 0);
        mini.push(temp);
    }

    vector<int> ans;
    while(!mini.empty()) {
        node* tmp = mini.top();
        ans.push_back(tmp -> data);
        mini.pop();
        int i = tmp -> row;
        int j = tmp -> col;

        if(j+1< kArrays[i].size()) {
            node* next = new node(kArrays[i][j+1], i, j+1);
            mini.push(next);
        }
       
        
    }
    return ans;
}
