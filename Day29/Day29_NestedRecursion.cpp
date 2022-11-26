// Topic: Recursion
// Description: Nested Recursion

#include <iostream>
using namespace std;

//Nested Recursion - recursive function will pass parameter as a recursive call

int fun(int n)
{
    if (n > 100)
        return n - 10;
    else
        return fun(fun(n + 11));
}
int main()
{
    int r;
    r = fun(95);
    cout << r;
    return 0;
}