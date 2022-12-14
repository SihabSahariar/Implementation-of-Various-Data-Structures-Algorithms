/*
    find index of last occurance in a sorted array
*/
#include <bits/stdc++.h>
using namespace std;

// Iterative method Time: O(log n), Space: O(1)
int lastOccuranceIterative(int arr[], int size, int element)
{
    // normal binary search
    int low = 0, high = size - 1;

    // logic:
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (element > arr[mid])
            low = mid + 1;

        else if (element < arr[mid])
            high = mid - 1;

        // extra case to handle equal elements
        else
        {
            if (mid == size - 1 || arr[mid + 1] != arr[mid]) // check if mid is last occurance
                return mid;

            else
                low = mid + 1; // else call for right half
        }
    }

    return -1;
}

// Recursive method Time: O(log n), Space: O(log n)
int lastOccuranceRecursive(int arr[], int low, int high, int element, int size)
{
    // normal binary search
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (element > arr[mid])
        return lastOccuranceRecursive(arr, mid + 1, high, element, size);

    else if (element < arr[mid])
        return lastOccuranceRecursive(arr, low, mid - 1, element, size);

    // extra case to handle equal elements
    else
    {
        if (mid == size - 1 || arr[mid + 1] != arr[mid]) // check if mid is last occ
            return mid;

        else
            return lastOccuranceRecursive(arr, mid + 1, high, element, size); // if not go to right half
    }
}

// Drive code
int main()
{
    // Given array
    int arr[] = {1, 3, 3, 4, 5, 6, 6, 6, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // fn call
    int number = 6;
    cout << lastOccuranceIterative(arr, size, number) << "\n";
    cout << lastOccuranceRecursive(arr, 0, size - 1, number, size);
}