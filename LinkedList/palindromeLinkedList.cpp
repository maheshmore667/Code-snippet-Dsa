#include<iostream>;
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* getMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    
    Node* reverseLinkedList(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
        
    }
    
    bool isPalindrome(Node *head)
    {
        if(head -> next == NULL) {
            return true;
        }
       Node* middle = getMiddle(head);
       Node* temp = middle -> next;
       middle -> next  = reverseLinkedList(temp);
       Node* head1 = head;
       Node* head2 = middle -> next;
       
       
       while(head2 != NULL) {
           if(head1 -> data != head2 -> data) {
               return false;
           }
           head1 = head1 -> next;
           head2 = head2 -> next;
       }
       
       return true;
    }
};
