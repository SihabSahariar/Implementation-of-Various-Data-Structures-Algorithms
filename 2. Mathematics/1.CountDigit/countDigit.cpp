#include <bits/stdc++.h>
using namespace std;

// iterative soln O(n)
int countDigitsIteratively(long n)
{
    // init vars
    int count = 0;

    // logic:
    while (n)
    {
        n /= 10;
        count++;
    }

    // return ans
    return count;
}

// recursive soln O(n)
int countDigitsRecursively(long n)
{
    // base case
    if (n == 0)
        return 0;

    // recursion
    return 1 + countDigitsRecursively(n / 10);
}

// best soln O(log n)
int countDigitsEfficiently(long n)
{
    return floor(log10(n) + 1);
}

// Driver code
int main()
{
    // Given number
    int n = 2179;

    // fn call
    cout << countDigitsEfficiently(n);
}