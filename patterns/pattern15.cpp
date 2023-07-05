#include<iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=1; i<=5; i++) {
        for(char j='A'; j <= 'A'+(n-i); j++) {
            cout<<j << " ";
        }
        cout<< endl;
    }
    return 0;
}

/* 

A B C D E 
A B C D 
A B C 
A B 
A 

 */