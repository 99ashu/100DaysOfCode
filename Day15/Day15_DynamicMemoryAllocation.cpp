// Topic: Dynamic Memory Allocation
// Description: Fundamentals

#include <iostream>
using namespace std;

int main()
{
    cout << "Input how many integer elements that you want to process: ";
    int n;
    cin >> n;

    int *p = new int[n]; //dynamic memory allocation with array

     for(int i = 0; i < n; ++i)
    {
        cout << "Next int: ";
        cin >> *(p + i);
    }

    for(int i = 0; i < n; ++i)
    {
        cout << *(p + i) << " ";
    }

    cout << endl;

    cout << "======================================" << endl;


    int *ptr = new int;  //dynamic memory allocation of single element
    cout << "Enter ptr: ";
    cin >> *ptr;
    cout << "ptr: " << *ptr << endl;

    cout << "======================================" << endl;


    int *gtr = new int(5); //dynamic memory allocation of single element with initialization
    cout << "gtr: " << *gtr;

    delete [] p;
    delete ptr;
    delete gtr;
    return 0;
}

