#include <bits/stdc++.h>

// Following is the Linked List node structure

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

Node *kReverse(Node *head, int k)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    int count = 0;

    // base case :
    if (head == NULL)
    {
        return NULL;
    }

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    head->next = kReverse(next, k);
    return prev;
}