#include <iostream>
using namespace std;

int getSum(int arr[], int size){
    int sum=0;
    for(int i = 0;i<size; i++){
        sum+= arr[i];
    }
    return sum;
}

int main() {
    int size;
    cin>> size;

    int numbers[10];
    for(int i=0; i<size; i++){
        cin>> numbers[i];
    }
    cout<<"Sum: "<<getSum(numbers, size);
    return 0;
}