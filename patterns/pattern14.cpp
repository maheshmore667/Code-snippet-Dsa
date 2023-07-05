#include<iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=1; i<=n; i++) {
        for(char j='A'; j<'A' + i; j++) {
            cout <<j << " ";
        }
        cout << endl;
    }
    return 0;
}

/* 
A 
A B 
A B C 
A B C D 
A B C D E 
 */