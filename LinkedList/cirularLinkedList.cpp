#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next ;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
    }

};

void insertNode(Node* &Tail, int dataPresent, int dataInsert) {
    //empty list
    if(Tail == NULL) {
        Node* newNode = new Node(dataInsert);
        Tail = newNode;
        newNode = newNode -> next;
    } else {
        //non-empty list
        Node* currentNode = Tail;
        while(currentNode -> data != dataPresent) {
            currentNode = currentNode -> next;
        }   
        Node* newNode = new Node(dataInsert);
        Node* frwdNode;
        frwdNode = currentNode -> next;
        currentNode -> next = newNode;
        newNode -> next =  frwdNode;   

    }

}

void deleteNode(Node* &Tail, int element) {
    //empty list
    if(Tail == NULL) {
        cout << "List is empty." << endl;
        return;
    } else 
    {
        Node* prev = Tail;
        Node* temp = prev -> next;
        cout << "prev : " << prev -> data << " Tail: " << Tail -> data << " temp: " << temp -> data << endl;
        while(temp -> data != element) {
            prev = temp;
            temp = temp -> next;
        }
        cout << "prev : " << prev -> data << " Tail: " << Tail -> data << " temp: " << temp -> data << endl;
        if(temp == Tail) {
            Tail = prev;
        }
        prev -> next = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    
}

void printLinkedList(Node* &Tail) {
    Node* temp = Tail;
    do {
        cout <<temp -> data << " ";
        temp = temp -> next;
    } while(temp != temp -> next);
}

int main() {
    Node* Tail = NULL;
    insertNode(Tail, 5, 3);
    
    insertNode(Tail, 3, 8);
    
    insertNode(Tail, 8, 9);
    
    insertNode(Tail, 3, 5); 
    //deleteNode(Tail, 3);
    printLinkedList(Tail);
    return 0;
}