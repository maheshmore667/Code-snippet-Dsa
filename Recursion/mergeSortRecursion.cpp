
#include <iostream>
using namespace std;

void merge(int *nums, int start, int end)
{
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int firstIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = nums[firstIndex++];
    }

    int secondIndex = mid + 1;
    for (int k = 0; k < len2; k++)
    {
        second[k] = nums[secondIndex++];
    }

    int firstIndex1 = 0;
    int secondIndex2 = 0;
    int mainIndex = start;


    while (firstIndex1 < len1 && secondIndex2 < len2)
    {
        if (first[firstIndex1] < second[secondIndex2])
        {
            nums[mainIndex++] = first[firstIndex1++];
        }
        else
        {
            nums[mainIndex++] = second[secondIndex2++];
        }
    }
    while (firstIndex1 < len1)
    {
        nums[mainIndex++] = first[firstIndex1++];
    }
    while (secondIndex2 < len2)
    {
        nums[mainIndex++] = second[secondIndex2++];
    }
}

void mergeSortRecursion(int *nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSortRecursion(nums, start, mid);
    mergeSortRecursion(nums, mid + 1, end);

    merge(nums, start, end);
}

int main()
{
    int nums[] = {14, 8,9, 23, 10, 11, 2};
    mergeSortRecursion(nums, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}