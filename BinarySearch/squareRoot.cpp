#include<iostream>
using namespace std;

long long int squareRoot(int n){
    int start = 0;
    int end = n;
    int mid = start + (end-start)/2;
    
    long long int ans = -1;
    while(start <= end) {
       long long int square = mid * mid;
        if(square == n){
            ans = mid;
            return ans;
        }
        if(square < n) {
            //if current square is less than the number then check fo right part 
            start = mid + 1;
            ans = mid;
        } 
        else {
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }

    return ans;
}

double morePrecision(int primaryRoot, int precision, int n){
   double factor = 1;
   double ans = primaryRoot;
    for(int i =0; i< precision; i++){
        factor = factor/10;
        for(double j = ans; j * j < n ; j = j + factor) {
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >>n;

    cout << "Answer is :" << squareRoot(n) << endl;
    int sol = squareRoot(n);

    cout << "Precise answer is : " << morePrecision(sol,3,n);
}