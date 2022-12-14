// https://www.youtube.com/watch?v=uCsD3ZGzMgE Numberphile
#include <bits/stdc++.h>
using namespace std;

// return survivor O(n)
int josephus(int n, int k)
{
    // base case
    if (n == 1)
        return 0;

    // fn call
    return (josephus(n - 1, k) + k) % n;
}

// Driver code
int main()
{
    // Given number
    int n = 5, k = 3;

    // fn call
    cout << josephus(n, k);
}