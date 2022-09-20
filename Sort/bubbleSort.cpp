#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{      //for rounds
    for(int i = 0; i< n-1; i++) {
         bool swapped = false;
         //for swaps
        for(int j = 0; j <n-(i+1); j++){
            if(arr[j+1] < arr[j] ) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!!!swapped){
            break;
        }
    }
}
