// Topic: Recursion
// Description: Indirect Recursion

#include <iostream>
using namespace std;

//Indirected Recursion - More than one function calls each other in a circular fashion

void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        funA(n / 2);
    }
}

int main()
{
    funA(20);
    return 0;
}
