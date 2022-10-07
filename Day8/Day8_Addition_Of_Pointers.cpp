//Topic: Pointers
//Description: Arithmetic operations between pointers
/*
The following code demonstrates how pointers behave when we do 
arithmetic operations on them like addition or subtraction
*/

#include<iostream>
using namespace std;

int main()
{

    int x = 10, y = 20;
    cout << "Address of x: " << (uintptr_t)&x << endl;
    cout << "Address of y: " << (uintptr_t)&y << endl;

    int *p;
    p = &x;

    cout << *p << " " << (uintptr_t)p << endl;

    p = p - 1;
    cout << *p << " " << (uintptr_t)p << endl;

    return 0;
}
