// Topic: Structures
// Description: Struct Pointers

/*
This code shows how we can use pointers with strutures
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

    Employee e;
    Employee* eptr = &e;

    eptr->empId = 5;
    (*eptr).name = "John";
    e.salary = 5000.00;

    cout << eptr->empId << endl;
    cout << e.name << endl;
    cout << e.salary << endl;



    Employee *p = new Employee;
    p->empId = 10;
    p->name = "Terry";
    p->salary = 6000.00;

    cout << p->empId << endl;
    cout << (*p). name << endl;
    cout << (*p).salary << endl;

    delete p;

    return 0;
}
