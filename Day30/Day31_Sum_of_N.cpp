// Topic: Recursion
// Description: Sum of N numbers using recursion

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;

    else
        return sum(n-1) + n;
}
// Time -> O(n)
// Space -> O(n)


int sumLoop(int n)
{
    int i, sum = 0;

    for(i = 1 ; i<=n ; ++i)
        sum += i;

    return sum;
}
// Time -> O(n)


int sumFormula(int n)
{
    return n * (n+1) / 2;
}
// Time -> O(1)


int main()
{
    cout << sum(5) << endl;
    cout << sumLoop(5) << endl;
    cout << sumFormula(5) << endl;

    return 0;
}