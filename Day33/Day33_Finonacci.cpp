// Topic: Recursion
// Description: Fibonacci series using Recursion

#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;

    return fibo(n-2) + fibo(n-1);
}
// Time -> O(2^n) approx
// Excessive Recursion - Recursive calling itself multiple times for same input parameters
// Memoization - Storing the reusults of function calls so that we can use them again or avoiding excessive calls


int F[10];
int fiboMemoization(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }

    else
    {
        if (F[n-2] == -1)
            F[n-2] = fibo(n-2);

        if (F[n-1] == -1)
            F[n-1] = fibo(n-1);

        return F[n-2] + F[n-1];
    }
}
// Time -> O(n)


int main()
{
    for (int i=0 ; i<10 ; ++i)
    {
        F[i] = -1;
    }

    cout << fibo(9) << endl;
    cout << fiboMemoization(9) << endl;
    
    return 0;
}