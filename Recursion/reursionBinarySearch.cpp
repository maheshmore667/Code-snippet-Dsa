#include <iostream>

using namespace std;

int binarySearch(int *arr, int start, int end, int key) {
    if(start > end) {
        return -1;
    }
    int mid = start + (end-start)/2;

    if(arr[mid] == key) {
        return mid;
    }
    else if(arr[mid] < key) {
        return binarySearch(arr, mid+1, end, key);
    } 
    else {
        return  binarySearch(arr, start, mid-1, key);
    }
}

int main() {
int nums[] = {3,4,6,8,10,13,18};
int key = 88;

cout << "Element present at : " << binarySearch(nums,0,6,key);

return 0;
}