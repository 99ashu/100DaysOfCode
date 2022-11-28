#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    else
        return fact(n-1) * n;
}
// Time -> O(n)
// Space -> O(n)


int main()
{
    cout << fact(5) << endl;
    
    return 0;
}