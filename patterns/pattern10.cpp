#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int rowCount = 2*n-1;
    for(int i=1; i<=rowCount; i++){
        int stars;
        i>n ? stars = 2*n-i : stars = i; 
        for(int j=1; j<=stars; j++) {
            cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}

/* 

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

 */