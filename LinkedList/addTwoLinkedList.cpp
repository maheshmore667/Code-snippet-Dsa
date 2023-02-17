

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{   
    private : 
    Node* reverseTheList( Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL) {
           next = curr -> next;
           curr -> next = prev;
           prev = curr;
           curr = next;
        }
        
        return prev;
    }
    public:
    
    void insertAtTail(struct Node* &ansHead, struct Node* &ansTail, int val) {
         Node* temp = new Node(val);
        if(ansHead == NULL) {
            ansHead = temp;
            ansTail = temp;
        } else {
           
            ansTail -> next = temp;
            ansTail = temp;
        }
    }
    
    Node* addList(struct Node* first, struct Node* second) {
        int carry = 0;
        int digit = 0;
       
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        while(first != NULL || second != NULL || carry != 0) {
            int val1 = 0;
            int val2 = 0;
            if(first != NULL) {
                val1 = first -> data;
            }
            if(second != NULL) {
                 val2 = second -> data;
            }
            int sum = carry + val1 + val2;
            digit = sum%10;
            
            // create a linked list that holds the ans
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            if(first  != NULL) {
                first = first -> next;
            }
            if(second != NULL) {
                second = second -> next;
            }
        }
        return ansHead;
    }
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverseTheList(first);
        second = reverseTheList(second);
        Node* ans = addList(first, second);
        ans = reverseTheList(ans);
        return ans;
    }
};



