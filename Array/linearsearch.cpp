#include <iostream>
using namespace std;

bool findKey(int arr[], int size, int key){
    for(int i=0; i< size; i++){
        if(key == arr[i]){
            return 1;
        }
    }

    return 0;
}

int main() {
    int size;
    cin>> size;

    int numbers[10];

    for(int i=0; i<size; i++){
        cin>> numbers[i];
    }

    int key;
    cin>>  key;
   
   findKey(numbers, size, key)  ? cout<< "Present" : cout<< "Absent";
    return 0;
}