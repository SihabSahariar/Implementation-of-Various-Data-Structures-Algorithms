#include <bits/stdc++.h>
using namespace std;

// sum using recursion
int getSum(int n)
{
    // base case
    if (n == 0)
        return 0;

    // logic:
    return getSum(n / 10) + (n % 10);
}

// Driver code
int main()
{
    // Given number
    int num = 253;

    // fn call
    cout << getSum(num);
}