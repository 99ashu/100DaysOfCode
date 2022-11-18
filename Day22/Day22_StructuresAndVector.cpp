// Topic: Structures
// Description: Structure And Vector

/*
This program shows an example of how we can use vector with structures.
*/

#include <iostream>
#include <vector>
using namespace std;


struct Employee
{
    int empId;
    string name;
    double salary;
};


int main()
{
    vector <Employee> empList;

    Employee e1 {1001, "John", 7500.0};
    Employee e2 {1002, "Terry", 5500.0};
    Employee e3 {1003, "Sovan", 4500.0};
    Employee e4 {1004, "Sree", 8750.0};

    empList.push_back(e1);
    empList.push_back(e2);
    empList.push_back(e3);
    empList.push_back(e4);

    for(int i = 0; i < empList.size(); ++i)
    {
        Employee e = empList[i];
        cout << "Emp Id: " << e.empId << endl;
        cout << "Name:  " << e.name << endl;
        cout << "Salary: " << empList[i].salary << endl;
        cout << endl;
    }

    return 0;
}
