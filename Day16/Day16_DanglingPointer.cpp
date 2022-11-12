// Topic: Dynamic Memory Allocation
// Description: Dangling Pointers

/*
This program shows the fundamental concepts of dangling pointers.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int* getArray(int n);
int* copyArray(int *source, int n);
void printArray(int *a, int n);

int main()
{
    cout << "Input number of elements you want to process: ";
    int n;
    cin >> n;
    int *arr = getArray(n);
    int *dest = copyArray(arr, n);
    printArray(arr, n);
    delete [] arr;
    printArray(dest, n);
    delete [] dest;
    cout << endl;
    return 0;
}

int* getArray(int n){
    int *p { new int[n]};
    time_t t = time(NULL);
    srand(t);

    for(int i = 0; i < n; ++i){
        p[i] = rand() % 100;
    }

    return p;
}

int* copyArray(int *source, int n){
    int *dest {new int[n]};
    for(int i = 0; i < n; ++i){
        dest[i] = source[i];
    }

    return dest;
}

void printArray(int *a, int n){
    cout << "Content of array: " << endl;
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}
