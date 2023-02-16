#include <bits/stdc++.h> 

    //Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


Node *removeDuplicates(Node *head)
{   
    Node* curr = head;
    unordered_set<int> visited;
    if(head == NULL){
        return head;
    }
   
    visited.insert(curr -> data); 
    while(curr != NULL && curr -> next != NULL) {
        if(visited.find(curr -> next -> data) != visited.end()) {
            curr -> next = curr -> next -> next;
        } else {
            visited.insert(curr ->next -> data); 
             curr = curr -> next;  
        }
       
    }

    return head;
}
