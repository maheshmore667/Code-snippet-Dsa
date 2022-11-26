#include <iostream>

using namespace std;

int sumOfArray(int *arr, int size) {
    if(size == 0) {
        return arr[0];
    } 
    return arr[0] + sumOfArray(arr+1, size-1);
}

int main()
{
  int nums[] = {2,4,6,8,9};
  cout << "Sum of array is : " << sumOfArray(nums,4);

    return 0;
}