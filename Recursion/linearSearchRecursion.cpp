#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int n) { 
    if(size < 0) {
        return false;
    }

    if(n == arr[0]) {
        return true;
    } else {
        return linearSearch(arr+1, size-1, n);
    }
}

int main() {
    int nums[] = {3,5,2,1,6};
    int n;
    cout << "Enter the number to search : " << endl;
    cin >> n;
    if(linearSearch(nums,4,n)){
        cout << "Element is present " << endl;
    } else {
        cout << "Element is absent " << endl;
    }
    return 0;
}