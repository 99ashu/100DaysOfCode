// Topic: Recursion
// Description: Linear Recursion

/*
Head and tail are part of linear recursion.
Lnear recursion are those where the recursive call is made just once
*/

#include <iostream>
using namespace std;

//tail recursion - recursive call is the last statment in the function
void fun1(int n)
{
    if (n>0)
    {
        cout << n << " ";
        fun1(n-1); 
    }
}
//time -> O(n)
//space -> O(n)


//tail recursion can be easily converted into loops
void loopfun1(int n)
{
    while (n>0)
    {
        cout << n << " ";
        n--;
    }
}
//time -> O(n)
//space -> O(1)



//head recursion - the function has to perform its operation in returning time
void fun2(int n)
{
    if (n>0)
    {
        fun2(n-1);
        cout << n << " ";
    }
}
//time -> O(n)
//space -> O(n)

//head recursion cannot be easily convnverted into loops

int main()
{
    int x = 3;
    fun1(x);
    cout << endl;
    loopfun1(x);
    cout << endl;
    fun2(x);
}