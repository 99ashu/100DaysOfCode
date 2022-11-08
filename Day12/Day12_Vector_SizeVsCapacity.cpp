//Topic: Vector
// Description: size() vs capacity()

/*
The following program shows the behavior of 
size() and capacity() functions on vectors. 
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <string> v1;
    cout << "Capacity: " << v1.capacity()
         << ", Size: " << v1.size() << endl;

    v1.push_back("John");
    cout << "Capacity: " << v1.capacity()
         << ", Size: " << v1.size() << endl;

    v1.push_back("Johnathon");
    cout << "Capacity: " << v1.capacity()
         << ", Size: " << v1.size() << endl;

    v1.push_back("Rambo");
    v1.push_back("Dan");
    v1.push_back("Thomas");

    cout << "Capacity: " << v1.capacity()
         << ", Size: " << v1.size() << endl;

    v1.shrink_to_fit();
    cout << "Capacity: " << v1.capacity()
         << ", Size: " << v1.size() << endl;

    return 0;
}
