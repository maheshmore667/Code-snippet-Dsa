#include<iostream>
#include<math.h>
using namespace std;

int powerRecursion(int base, int powerValue) {
    if(powerValue == 0) {
        return 0;
    } 
    if(powerValue == 1) {
        return base;
    }
    int ans = powerRecursion(base, powerValue/2);

    if(powerValue % 2 == 0 ) {
        return ans * ans;
    } else {
        return base * ans * ans;
    }
}

int main(){
    int a, b;
    cout << "Enter base and power : " << endl;
    cin >> a >> b;

    cout << "Answer is : " << powerRecursion(a, b);

}