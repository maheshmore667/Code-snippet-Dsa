#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<int> q;
    q.push(11);
    cout << "Top of the queue : " << q.front() << endl;
    q.push(12);
    q.push(13);
    cout << "Size of the queue : " << q.size() << endl;
    q.pop();
    cout << "Top of the queue : " << q.front() << endl;
    cout << "Size of the queue : " << q.size() << endl;
    q.pop();
    q.pop();
    if(q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
         cout << "Queue is not empty" << endl;
    }


    return 0;
}