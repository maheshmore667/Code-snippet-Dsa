#include <bits/stdc++.h> 
#include <bits/stdc++.h> 


class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};


Node* mergeLists(Node* left, Node* right) {
	if(left == NULL) {
		return right;
	} 
	if(right == NULL) {
		return left;
	}
	
	Node* temp;
	
	if(left -> data < right -> data) {
		
		temp = left;
		temp ->  child = mergeLists(left -> child, right);

	} else {
	
		temp = right;
		temp -> child = mergeLists(left, right -> child);
	}
	temp -> next = NULL;
	return temp;
}

Node* flattenLinkedList(Node* head) 
{
	if(head == NULL || head -> next == NULL) {
		return head;
	}
	head -> next = flattenLinkedList(head -> next);

	head = mergeLists(head, head -> next);

	return head;
}