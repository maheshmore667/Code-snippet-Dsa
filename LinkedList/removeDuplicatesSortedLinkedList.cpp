#include<iostream>
using namespace std;
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    


Node * uniqueSortedList(Node * head) {
    //list is empty
   if(head == NULL) {
       return NULL;
   }


   //list is non - empty
    Node * current = head;
   while(current != NULL) {
       if((current -> next != NULL) && current -> data == current -> next -> data) {
           
           Node* nodeToPoint = current -> next -> next;
           Node* nodeToDelete = current -> next;
           delete(nodeToDelete);
           current -> next = nodeToPoint;
       } else {
          
           current = current -> next;
       }
    
   }
   return head;
}