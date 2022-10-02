#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> d;

    d.push_back(3);
    d.push_front(2);
    /* for(int i: d) {
        cout << i << "," ;
    } */
    //d.pop_front();
    //d.pop_back();
    for(int i: d) {
        cout << i << "," ;
    }
    cout << endl;
    cout << d.at(0) << endl;
    cout << "size of deque" << d.size();

    d.erase(d.begin(), d.begin()+1);
     cout << endl;
     for(int i: d) {
        cout << i << "," ;
    }

    return 0;
}