#include<iostream>

using namespace std;

class Node {
    public : 
     int data;
     Node* next;

     Node(int data) {
        this -> data = data;
        this -> next = NULL;
     }
};

void insertAtStart(Node* &Head, int data) {
    Node* newNode = new Node(data);
    newNode -> next = Head;
    Head = newNode;
}

void insertAtTail(Node* &Tail, int data) {
    Node* newNode = new Node(data);
    Tail -> next = newNode;
    Tail = newNode;

}

void inserAtPosition(Node* &Head, int data, int position, Node* &Tail) {
   
    if(1 == position) {
       insertAtStart(Head, data);
       return;
    }

    int count = 1;
    Node* newNode = new Node(data);
    Node* temp = Head;

    while(count != position-1 ) {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL) {
        insertAtTail(Tail, data);
        return;
    }

    Node* nextNode;
    nextNode = temp -> next;
    temp -> next = newNode;
    newNode -> next =  nextNode;
}

void printLinkedList(Node* &Head) {
    Node* temp;
    temp = Head;
    while(temp!= NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main () {
    Node* newNode = new Node(10);
    Node* Head = newNode;
    Node* Tail = newNode;

    // insert nodes at Tail
    insertAtTail(Tail, 12);
    insertAtTail(Tail, 15);
    insertAtTail(Tail, 20);

    //insert nodes at head
    /* insertAtStart(Head, 12);
    insertAtStart(Head, 15); */

    //insert node at specific position
    inserAtPosition(Head, 18, 3, Tail);

    printLinkedList(Head);

    cout << endl;
    cout << "Head : " << Head -> data << endl;
    cout << "Tail : " << Tail -> data << endl;
    return 0;
}