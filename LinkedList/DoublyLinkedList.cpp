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

int main() {

    Node* newNode = new Node(10) ;
    Node* Head;
    Head = newNode;
    printLinkedList(Head);
    cout << "Length of Linked List : " << getLengthOfLinkedList(Head);
    return 0;
}