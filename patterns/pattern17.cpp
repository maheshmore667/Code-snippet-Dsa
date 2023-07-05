#include<iostream>
using namespace std;

int main() {

    int n=5;
    for(int i=1; i<=5; i++){
        //space 
        for(int j=1; j<=n-i; j++) {
            cout<<" ";
        }
        //chars
        char ch='A';
        for(int j=1; j<=(i+(i-1));j++) {
            cout<<ch;
            if(j<i){
                ch++;
            } else {
                ch--;
            }
           
        }

       
        //space 
        for(int j=1; j<=n-i; j++) {
            cout<< " ";
        }
        cout<< endl;
    }
    return 0;

}


/* 
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA

 */