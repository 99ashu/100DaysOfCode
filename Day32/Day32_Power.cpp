// Topic: Recursion
// Description: Power using Recursion

#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
        return 1;

    else
        return pow(m,n-1) * m;
}
// Time -> O(n)
// Space -> O(n)


int powAdvanced(int m, int n)
{
    if (n == 0)
        return 1;

    else if (n % 2 == 0)
        return powAdvanced(m*m, n/2);

    else
        return m * powAdvanced(m*m, (n-1)/2);
}

int main()
{
    cout << pow(2,4) << endl;
    cout << powAdvanced(2,9) << endl;

    return 0;
}