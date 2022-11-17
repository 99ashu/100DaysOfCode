// Topic: Structures
// Description: Structure And Array

/*
This program shows an example of how we can use array with structures.
*/

#include <iostream>
using namespace std;

struct Employee
{
    int empId;
    string name;
    double salary;
};

int main()
{
    const int SIZE = 3;
    Employee e[SIZE];

    for(int i = 0; i < SIZE; ++i)
    {
        cout << "Emp Id: ";
        cin >> e[i].empId;
        cout << "Emp Name: ";
        cin >> e[i].name;
        cout << "Salary: ";
        cin >> e[i].salary;
    }

    cout << "Employee Details: " << endl;
    for(int i = 0; i < SIZE; ++i)
    {
        cout << "Employee Id: " << e[i].empId << endl
             << "Name: " << (e+i)->name << endl
             << "Salary: " << (e+i)->salary << endl;
        cout << "----------------------------" << endl;
    }

    return 0;
}
