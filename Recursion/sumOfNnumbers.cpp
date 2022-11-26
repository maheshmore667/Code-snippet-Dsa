#include <iostream>

using namespace std;

int sum ( int n) {
    if(n == 0){
        return 0;
    }

    return n + sum (n-1);
}

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << endl;
    cout <<"Sum is : "<< sum(n);

    return 0;
}