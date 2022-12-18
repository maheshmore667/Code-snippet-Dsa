#include<iostream>
using namespace std;

int partition(int *nums, int start, int end) {
    int count = 0;
    for (int i = start+1; i<= end; i++) {
        if(nums[i] <= nums[start]){
            count++;
        }
    }
    int correctIndex = start + count ;
    swap(nums[start], nums[correctIndex]);
    int startPointer = start;
    int endPointer = end;

    while(startPointer < correctIndex && endPointer > correctIndex ) {
        while(nums[startPointer] <= nums[correctIndex]){
            startPointer++;
        }
        while(nums[endPointer] > nums[correctIndex]){
            endPointer--;
        }
        if(startPointer < correctIndex && endPointer > correctIndex) {
             swap(nums[startPointer++], nums[endPointer--]);
        }
       
    }
    return correctIndex;
}

void quickSortRecursionFunc(int *nums, int start, int end)
{
    if ( start >= end )
    {
        return;
    }

    int correctIndex = partition(nums, start, end);
    
    quickSortRecursionFunc(nums, start, correctIndex-1);
    quickSortRecursionFunc(nums, correctIndex+1, end);
}

int main() {
    int nums[] = {4,2,5,1,3};
    quickSortRecursionFunc(nums, 0, 4);
    for(int i=0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}