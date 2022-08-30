#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < 6 && j < 4)
    {

        // if match found then pushing it into answer
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
          
            i++;
            j++;
            
        }
        // array is sorted so no need to traverse whole array
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << "intersection of two arrays : " << endl;
    for (int n : ans)
    {
        cout << n;
    }
}
