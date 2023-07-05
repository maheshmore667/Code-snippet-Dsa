#include<iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=1; i<=5; i++){
        for(char ch='F'-i; ch<='E'; ch++){
            cout<<ch << " ";
        }
        cout<< endl;
    }
    return 0;
}

/* 

E 
D E 
C D E 
B C D E 
A B C D E 
 */