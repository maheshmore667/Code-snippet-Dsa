#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    int ans = 0;

    for(int i=0; i<size; i++) {
        ans = ans ^ arr[i];
    }

    for(int i=0; i<size; i++) {
        ans = ans ^ i;
    }

    return ans;
}

int main() {
    int numbers[10];
    int size;
    cin >>size;

     for(int i=0; i<size; i++){
        cin>> numbers[i];
    }
    cout <<"Duplicate Element : " <<  findDuplicate(numbers, size) << endl;
    return 0;
}