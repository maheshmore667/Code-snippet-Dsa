#include<iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=1; i<=5; i++) {
        //stars
        for(int j=n+1-i; j>0; j--) {
            cout<<"*";
        }
        //spaces
        for(int p=1; p<i; p++){
            cout<<" ";
        }
        //spaces
        for(int k=1; k<i; k++){
            cout<<" ";
        }
        //stars
        for(int l=n+1-i;l>0; l--){
             cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i=1; i<=5; i++){
        //stars
        for(int j=1; j<=i; j++) {
            cout<<"*";
        }
        //spaces
        for(int t=n-i; t>0; t--){
            cout<<" ";
        }
        //spaces
          for(int t=n-i; t>0; t--){
            cout<<" ";
        }
        //stars
        for(int r=1; r<=i; r++){
            cout<<"*";
        }

        cout<< endl;
    }
    return 0;
}

/* 
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


 */