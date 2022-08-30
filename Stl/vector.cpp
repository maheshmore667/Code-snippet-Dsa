#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    //another way to declare and initialize array with valu 1
    //by default it is initialized by 0
    vector<int> a(5,1);

    //find the size
    cout<<"Size : " << v.size()<<endl;

    //find the capacity
    cout<<"Capacity : " << v.capacity()<<endl;

    //push the element
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);

     //find the element at particular position
     v.at(2);

     //printig the vector
     for(int n : v) {
        cout<< n ;
     }

     cout<<endl;

     //finding 1st element
     cout <<"First element"<<v.front()<<endl;

     //finding last element
     cout <<"last element"<<v.back() <<endl;

     //remove last element
      v.pop_back();

       for(int n : v) {
        cout<< n ;
     }











}