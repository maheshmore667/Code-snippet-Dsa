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


void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev) {
    if(curr==NULL) {
        head = prev;
        return;
    }
    
    LinkedListNode<int>* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{  
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    reverse(head, curr, prev);
    return head;
}