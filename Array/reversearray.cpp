#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int temp;
    for (int i = 0; i < size; i++)
    {
        if (start == end || start > end)
        {
            return;
        }
        else
        { 
            temp = arr[i];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

int main()
{
    int size;
    cin >> size;

    int numbers[10];
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    reverseArray(numbers, size);
    cout << "Revesered Array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i];
    }

    return 0;
}