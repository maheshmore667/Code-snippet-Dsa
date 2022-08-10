#include <iostream>
using namespace std;

int findunique(int arr[], int size) {
    int count = 0;
    int uniqueElement;
    for(int i=0; i<size; i++) {
            count = 0;
        for( int j=0; j< size; j++) {

            if(arr[i] == arr[j] && i!=j) {
                count++;
            } 

        }

        if(count == 0){
            uniqueElement = arr[i];
        }
        
    }
    return uniqueElement;
}

int main() {
    int numbers[10];
    int size;
    cin >>size;

     for(int i=0; i<size; i++){
        cin>> numbers[i];
    }
    cout <<"Unique Element : " <<  findunique(numbers, size) << endl;

    return 0;
}