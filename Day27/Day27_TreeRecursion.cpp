// Topic: Recursion
// Description: Tree Recursion

#include <iostream>
using namespace std;

//Tree recursion - when function calls itself more than one time
// Time -> O(2^n)
// Space -> O(n)

void fun1(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        fun1(n - 1);
        fun1(n - 1);
    }
}

int main()
{
    int x = 3;
    fun1(x);
} 