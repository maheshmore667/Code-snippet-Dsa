

#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {

    int temp;
    //making i+=2 to swap alternate pair
    for(int i=0; i<size; i+=2){
        if (i+1 < size){
            //checkig if next element is available for swap
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        } 
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout << arr[i] << " "; 
    }
}

int main() {
    int numbers[10];
    int size;
    cin>> size;

    for(int i=0; i<size; i++){
        cin >> numbers[i];
    }
    cout << "Swapped Array : " << endl ;
    swapAlternate(numbers, size);
    printArray(numbers, size);
    return 0;
}