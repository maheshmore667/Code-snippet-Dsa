#include <bits/stdc++.h>
#include <bits/stdc++.h>

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

int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}

Node* getMiddle(Node* head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node* fast = head -> next;
    Node* slow = head;

    while(fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;
    }

    return slow;
}


Node *findMiddle(Node *head)
{
    int length = getLength(head);
    int position = length / 2;

    int cnt = 0;

    while (cnt < position)
    {
        head = head->next;
        cnt++;
    }

    return head;
}