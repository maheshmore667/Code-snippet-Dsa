#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
using namespace std;


    //Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


//Iterative solution (Mahesh's preference)

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head == NULL || head -> next == NULL) {
        return head;
    } else {
        LinkedListNode<int>* prev = NULL;
        LinkedListNode<int>* current = head;
        LinkedListNode<int>* forwardNode = NULL;
        
        while(current != NULL) {
            forwardNode = current -> next;
            current -> next = prev;
            prev = current;
            current = forwardNode;
        }
        return prev;
    }
}