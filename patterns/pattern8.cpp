#include<iostream>
using namespace std;

int main() {
    for(int i=1; i<=5; i++) {
        //space
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }

        int c= ((5*2)-(i+(i-1)));
        //star
        for(int j=1; j<=c; j++){
            cout<<"*";
        }

        //space
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        cout<< endl;
    }

    return 0;
}

/* 
*********
 ******* 
  *****  
   ***   
    *    


 */