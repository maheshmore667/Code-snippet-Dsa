#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* prev;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

};


//traverse linked list logic
void printLinkedList(Node* &Head) {
    Node* temp = Head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


// get length of the linked list 
int getLengthOfLinkedList(Node* &Head) {
    Node* temp = Head;
    int length = 0;

    while(temp != NULL) {
        length++;
        temp = temp -> next;
    }

    return length;
}

void insertAtHead(Node* &Head, int data) {

    Node* newNode = new Node(data);

    if(Head == NULL) {
        Head = newNode;
    } else {
        newNode -> next = Head;
        Head -> prev = newNode;
        Head = newNode;
    }
    
}

void insertAtTail(Node* &Tail, int data) {
    Node* newNode = new Node(data);

    if(Tail == NULL) {
        Tail = newNode;
    } else {
        Tail -> next = newNode;
        newNode -> prev = Tail;
        Tail = newNode;
    }
    
}

void inserAtPosition(Node* &Head, Node* &Tail, int data, int position) {

    if(position == 1) {
        insertAtHead(Head, data);
        return;
    }
    int cnt = 1;
    Node* temp = Head;
    while(cnt != position-1) {
        temp = temp -> next;
        cnt++;
    }
    if(temp->next == NULL) {
        insertAtTail(Tail, data);
        return;
    }
    Node* newNode = new Node(data);
    Node* frwdNode;
    frwdNode = temp -> next;
    temp -> next = newNode;
    newNode -> prev = temp;
    newNode -> next = frwdNode;
    frwdNode -> prev = newNode;

}

int main() {

    Node* newNode = new Node(10) ;
    Node* Head;
    Node* Tail;
    Head = newNode;
    Tail = newNode;
    insertAtHead(Head, 9);
    insertAtHead(Head, 8);
    insertAtHead(Head, 7);
    insertAtTail(Tail, 11);
    insertAtTail(Tail, 12);
    insertAtTail(Tail, 17);
    inserAtPosition(Head, Tail, 20, 1);
    printLinkedList(Head);
    cout << "Length of Linked List : " << getLengthOfLinkedList(Head);
    return 0;
}