#include <iostream>
#include <list>

using namespace std;

int main() {
    list <int> l;
    list<int> m(5,100);
     for(int i: m) {
        cout << i << "," ;
    } cout << endl;

    l.push_back(3);
    l.push_front(2);
    /* for(int i: d) {
        cout << i << "," ;
    } */
    //d.pop_front();
    //d.pop_back();
    for(int i: l) {
        cout << i << "," ;
    }
    cout << endl;
    cout << "size of list" << l.size();

    l.erase(l.begin()); //for every element we have to delete it manually
     cout << endl;
     for(int i: l) {
        cout << i << "," ;
    }

    return 0;
}