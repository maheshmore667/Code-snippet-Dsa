#include<iostream>
using namespace std;

int partition(int *nums, int start, int end) {
    int count = 0;
    for (int i = start+1; i< end; i++) {
        if(nums[i] <= nums[start]){
            count++;
        }
    }
    int correctIndex = start + count ;
    swap(nums[start], nums[correctIndex]);
    int startPointer = start;
    int endPointer = end;

    while(startPointer <= endPointer ) {
        while(nums[startPointer] < nums[correctIndex]){
            startPointer++;
        }
        while(nums[endPointer] > nums[correctIndex]){
            endPointer--;
        }
        swap(nums[startPointer++], nums[endPointer--]);
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
    
    quickSortRecursionFunc(nums, start, correctIndex);
    quickSortRecursionFunc(nums, correctIndex+1, end);
}

int main() {
    int nums[] = {14, 8,9, 23, 10, 11, 2};
    quickSortRecursionFunc(nums, 0, 7);
    for(int i=0; i < 7; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}