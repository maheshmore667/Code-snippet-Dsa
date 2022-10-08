#include<iostream>
#include<set>

using namespace std;

int main() {
    set<int> s;
    //set always has unique and sorted element
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(4);
    //insert -> time complexity O(logn)

    for(int i : s){
        cout << i << " ";
    } cout << endl;

    cout << "size of the set :" << s.size() << endl;
    cout << "Is set is empty : " << s.empty()<< endl;

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it);

    cout << "set after erase" << endl;
     for(int i : s){
        cout << i << " ";
    } cout << endl;

    cout << "finding 5 -> " << s.count(5);



}