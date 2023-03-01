#include <bits/stdc++.h> 
class Queue {
public:
    int *arr;
    int size, qFront, rear;
    Queue() {
        size = 100001;
        arr = new int[size];
        qFront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qFront == rear) {
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size) {
            cout << "Queue is full";
        } else {
            arr[rear++] = data;
        }
    }

    int dequeue() {
       if(qFront == rear) {
           return -1;
       } else {
           int ans = arr[qFront];
           arr[qFront++] = -1;
           if(qFront == rear) {
               qFront = 0;
               rear = 0; 
           }
           return ans;
       }
    }

    int front() {
        if(qFront == rear) {
            return -1;
        } else {
            return arr[qFront];
        }
    }
};