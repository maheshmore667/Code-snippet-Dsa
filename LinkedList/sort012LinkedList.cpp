#include <iostream>

using namespae std;

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



void insertAtTail(Node* &tail, Node* curr) {
    tail -> next = curr;
    tail = tail -> next;
}

Node* sortList(Node *head)
{
   Node* zeroHead = new Node(-1);
   Node* zeroTail = zeroHead;
   Node* oneHead = new Node(-1);
   Node* oneTail = oneHead;
   Node* twoHead = new Node(-1);
   Node* twoTail = twoHead;

   Node* curr = head;

   while(curr != NULL) {
       if(curr -> data == 0) {
           insertAtTail(zeroTail, curr);
       }

       else if(curr -> data == 1) {
           insertAtTail(oneTail, curr);
       }

       else if(curr -> data == 2) {
           insertAtTail(twoTail, curr);
       }

       curr = curr -> next;
   }

   if(oneHead -> next != NULL) {
       zeroTail -> next = oneHead -> next;
       oneTail -> next = twoHead -> next;
   } else {
       zeroTail -> next = twoHead -> next;
   }
   twoTail -> next = NULL;
   head = zeroHead -> next;

   delete zeroHead;
   delete oneHead;
   delete twoHead;

   return head;

}