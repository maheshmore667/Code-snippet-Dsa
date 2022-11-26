
#include <iostream>

using namespace std;

bool isSorted(int *nums, int size) {
    if(size == 0 || size == 1){
        return true;
    } 
    
    if(nums[0] > nums[1]) {
        return false;
    }
    else {
      return isSorted(nums+1, size-1);
    }
    
}

int main()
{
  int nums[] = {2,4,6,8,9};
  if(isSorted(nums, 5)) {
      cout << "Array is sorted" << endl ; 
  } else {
       cout << "Array is not sorted" << endl ; 
  }

    return 0;
}
