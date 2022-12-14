#include <bits/stdc++.h>
using namespace std;

// find min difference of a pair in array
int getMinDiff(int arr[], int n)
{
    // sort
    sort(arr, arr + n);

    // initialize variables:
    int res = INT_MAX;

    // logic
    for (int i = 1; i < n; i++)
        res = min(res, arr[i] - arr[i - 1]);

    // answer
    return res;
}

// Driver code
int main()
{
    // Given array
    int arr[] = {5, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // fn call
    cout << getMinDiff(arr, n);
}