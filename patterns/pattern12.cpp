#include<iostream>
using namespace std;

int main() {
    int n=4;

    for(int i=1; i<=4; i++){
        
        //numbers
        for(int j=1; j<=i;j++) {
            cout<<j;
        }

        //spaces
        for(int j=1; j<=(2*n - 2*i);j++) {
            cout<<" ";
        }

        //numbers
        for(int j=1; j<=i;j++) {
            cout<<j;
        }

        cout << endl;
    }
    return 0;
}

/* 
1      1
12    12
123  123
12341234
 */