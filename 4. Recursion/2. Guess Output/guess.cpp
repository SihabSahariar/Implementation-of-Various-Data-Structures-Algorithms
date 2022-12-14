#include <bits/stdc++.h>
using namespace std;

// function 1
void firstFun(int n)
{
    // base case
    if (n == 0)
        return;

    // print statement
    cout << n << " ";

    // recursion
    firstFun(n - 1);

    // print statement
    cout << n << " ";
}

// function 2
void secondFun(int n)
{
    // base case
    if (n == 0)
        return;

    // recursion
    secondFun(n - 1);

    // print statement
    cout << n << " ";

    // recursion
    secondFun(n - 1);
}

// function 3 (gives [log2 n])
int thirdFun(int n)
{
    // base case
    if (n == 1)
        return 0;

    // recursion
    else
        return (1 + thirdFun(n / 2));
}

// function 4 (prints binary)
void fourthFun(int n)
{
    // base case
    if (n == 0)
        return;

    // recrusion
    fourthFun(n / 2);

    // print statement
    cout << (n % 2);
}

// Driver code
int main()
{
    // function 1
    cout << "First function:\n";
    firstFun(3);
    cout << "\n";

    // function 2
    cout << "Second function:\n";
    secondFun(3);
    cout << "\n";

    // function 3
    cout << "Third function:\n";
    cout << thirdFun(16);
    cout << "\n";

    // function 4
    cout << "Fourth function:\n";
    fourthFun(8);
}