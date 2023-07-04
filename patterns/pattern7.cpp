#include<iostream>

using namespace std;

int main() {
    for(int i=1; i<=5; i++) {
        //space
        for(int j=1; j<=(5-i); j++){
            cout << " ";
        }
        //star
        int c= i + (i-1);
        for(int j=1; j<=c; j++) {
             cout << "*";
        }
        //space
         for(int j=1; j<(5-i); j++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
    *   
   ***  
  ***** 
 *******
*********

 */