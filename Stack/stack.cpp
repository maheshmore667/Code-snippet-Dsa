#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack <int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();

    cout << "Top element of the stack : " << s.top() << endl;
    cout << "size of the stack : " << s.size() << endl;
    if(s.empty()) {
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is not empty" << endl;
    }
} 