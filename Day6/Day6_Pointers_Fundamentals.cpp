//Topic: Pointers
//Description: Fundamentals about pointers and address of a variable

#include<iostream>
using namespace std;

int main()
{
    int x = 30;
    cout << (uintptr_t)&x << endl;

    int *p; //*p is a pointer which will contain address of some other integer variable
    p = &x; //here *p is containing address of x which means the value of p is the address of x
    cout << (uintptr_t)p << endl; //value of p or we may say address of x is printed
    cout << *p << endl; //value of p is xxx(which is address of x) and the value at xxx is 30

    *p = *p + 1;
    cout << *p << endl;
    cout << x << endl;
    
    return 0;
}
