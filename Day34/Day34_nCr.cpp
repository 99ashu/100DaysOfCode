// Topic: Recursion
// Description: Fibonacci series using Recursion

#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;

    else
        return nCr(n-1, r-1) + nCr(n-1,r);
}

int main()
{
    cout << nCr(4,2);
    return 0;
}