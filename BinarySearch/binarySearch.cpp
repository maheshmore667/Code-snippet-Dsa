
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(mid <= end) {
        if(arr[mid] == key) {
            return mid;
        } 
        else if (arr[mid] < key ){
            start = mid +1;
        } 
        else {
            end = mid -1;
        }
         mid = start + (end - start)/2;
    }
    
 return -1;
}


int main() {
    int odd[] = {12, 15, 20, 25, 40};
    int even[] = {12, 15, 20, 25, 40, 45};
    cout << "searched key found at : " << binarySearch(even, 6, 20);

    return 0;
}