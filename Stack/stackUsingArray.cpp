#include<iostream>
using namespace std;

class Stack {
    public : 
    int size;
    int *arr;
    int top = -1;

    Stack(int size) {
        this -> size = size;
        arr = new int[size];
    }

    void push(int data) {
        if(top < size) {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack is overflow" << endl;
        }
    }

    void pop() {
        if(top >= 0 ) {
            top--;
        } else {
            cout << " stack is underflow " << endl;
        }
    }

    bool isempty() {
        if(top >= 0 ) {
           return false;
        } else {
           return true;
        }
    }
    int peek() {
        if(top >= 0 ) {
           return arr[top];
        } else {
          cout << "Stack is empty" << endl;
        }
    }
};

int main() {
    Stack st(5);
    st.push(78);
    st.push(73);
    st.push(75);

    cout << "Top of the stack : " << st.peek() << endl;
    st.pop();
    cout << "Top of the stack : " << st.peek() << endl;
    st.pop();
    cout << "Top of the stack : " << st.peek() << endl;
    st.pop();
    
    if(st.isempty()) {
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is not empty" << endl;
    }
}