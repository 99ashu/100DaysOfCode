// Topic: Recursion
// Description: Static Recursion

/*
This program shows an example of static and global recursion.
*/

#include <iostream>
using namespace std;

int fun(int n)
{
    static int x = 0;

    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int y = 0;
int fun2(int n)
{
    if (n > 0)
    {
        y++;
        return fun2(n - 1) + y;
    }
    return 0;
}

int main()
{
    int r = fun(5);
    cout << r << endl;

    int q = fun2(5);
    cout << q << endl;

    return 0;
}