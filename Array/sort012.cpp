#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int i = 0;
    int j = n-1;
    int k = 0;
    int temp;
    while (k <= j)
    {
        if (arr[k] == 0)
        {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            i++;
            k++;
        }
        else if (arr[k] == 1)
        {
            k++;
        }
        else
        {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
            j--;
        }
    }

}

int main()
{ 
    //you can enter demo input here
    
    int numbers[] = {0, 1, 2, 2, 1, 0};

    sort012(numbers, 6);

    
    for (int i = 0; i < 6; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}