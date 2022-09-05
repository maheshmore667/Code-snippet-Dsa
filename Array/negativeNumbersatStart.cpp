#include<iostream>
using namespace std;

void swap(int &a,int &b){
  int temp =a;
  a=b;
  b=temp;
}

void  negativeNumbersAtStart(int arr[], int size) {
    int lft = 0;
    int rgt = size - 1;
    while (lft < rgt)
    { 
       
       if(arr[lft] > 0 && arr[rgt] < 0) {
        swap(arr[lft], arr[rgt]);
       }
       else if (arr[rgt] > 0) {
        rgt--;
       } else {
        lft++;
       }

    }
  
    
}


void displayArray(int arr[],int n) {
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main() {
    int n = 9;
    int nums[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    /* for (int i=0; i < n; i++){
        cin>> nums[i];
    } */
    negativeNumbersAtStart(nums, n);
    displayArray(nums, n);
}