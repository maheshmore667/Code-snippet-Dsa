#include<iostream>
using namespace std;

class Node {
    public : 
     int data;
     Node* prev;
     Node* next;

     Node(int data) {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
     }
};

void insertAtHead(Node* &Head, int data) {
    Node* temp = Head;
    while(temp -> next != NULL) {
            temp = temp -> next;
    }
    Node* newNode = new Node(data);
    temp -> next = newNode;
    newNode -> prev = temp;

}

void printLinkedList(Node* &Head) {
    Node* temp = Head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

Node* reverseDoublyLinkedList(Node* &Head) {
    Node* current = Head;
    Node* prev = NULL;
    Node* nextNode;
    while( current != NULL) {
        nextNode = current -> next;
        current -> next = prev;
        current -> prev = nextNode;
        prev = current;
        current = nextNode;
    }
    Head = prev;
    return Head;
}

int main () {
    Node* newNode = new Node(10);
    Node* Head = newNode;
    insertAtHead(Head, 11);
    insertAtHead(Head, 12);
    insertAtHead(Head, 13);
    insertAtHead(Head, 14);
    cout << "reversing the Doubly Linked List .... " << endl;
    reverseDoublyLinkedList(Head);
    printLinkedList(Head);
    return 0;
}