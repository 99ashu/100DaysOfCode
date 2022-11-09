// Topic: Vector
// Description: Vector Constructor

/*
This program shows how to use vector constructor in
different scenaraios
*/

#include <iostream>
#include <vector>

using namespace std;

void display(vector <int> &v)
{
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
    cout << "Content of the vector: " << endl;
    for(int p:v)
    {
        cout << p << ", ";
    }
    cout << endl;
}


int main()
{
    vector <int> v1; //Empty Vector

    vector <int> v2(5);
    display(v2);
    cout << endl;

    vector <int> v3(5, -1);
    display(v3);
    cout << endl;

    int x[] = {10, 20, 30, 40, 50};
    vector <int> v4 (x, x + 5);
    display(v4);
    cout << endl;

    vector <int> v5 (v4);
    display(v5);
    cout << endl;

    vector <int> v6 (v5.rbegin(), v5.rend());
    display(v6);
    cout << endl;


    return 0;
}
