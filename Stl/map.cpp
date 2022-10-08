#include<iostream>
#include<map>

using namespace std;

int main() {
    map<int, string> m;
    //map will always have unique keys pointing to only one value
    m[1] = "Mahesh";
    m[10] = "Vishal";
    m[5] = "Hari";
    m[6] = "More";
    m.insert({2,"Vijay"});

    cout << "Before erase " << endl;

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << "Finding 10 => " << m.count(10) << endl;

    m.erase(2);
    cout << " After erase" << endl;
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    } cout << endl;


}