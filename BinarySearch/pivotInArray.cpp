#include <iostream>
using namespace std;

int pivotInArray(int nums[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start < end) {
        if(nums[mid]>= nums[0]) {
            start = mid+1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return nums[start];
}


int main() {
   
    int nums[] = {7, 9, 10, 1, 2, 3};
    cout << "Pivot in the array is: " << pivotInArray(nums, 6);

    return 0;
}