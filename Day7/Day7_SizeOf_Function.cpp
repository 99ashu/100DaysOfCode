//Topic: Pointers
//Description: About sizeof() function

/*
The following program demonstrates the different scenarios of 
how the sizeof() function behaves.
*/

#include<iostream>
using namespace std;

int main()
{
    int *p;
    cout << sizeof(p) << " " << sizeof(*p) << endl;;
    char *q;
    cout << sizeof(q) << " " << sizeof(*q) << endl;
    double *r;
    cout << sizeof(r) << " " << sizeof(*r) << endl;
    float *s;
    cout << sizeof(s) << " " << sizeof(*s) << endl;

    return 0;
}
