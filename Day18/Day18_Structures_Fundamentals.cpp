// Topic: Structures 
// Description: Fundamentals

/*
This code shows the fundamentals of structures.
Some simple structures are created and then their objects are initialized in different ways.
*/

#include <iostream>
#include <string>

using namespace std;

struct Student
{
    int student_id;
    string name;
    double grade_point;
};

struct StudentNEW
{
    int student_id;
    string name;
    double grade_point;
}a1,a2,a3; //a1,a1,a3 are global

struct rectangle
{
    int l;
    int b;
    char x;
}r1;

int main()
{
    Student s1, s2, s3;

    s1.student_id = 1;
    s1.name = "John Doe";
    s1.grade_point = 9.95;

    s2.student_id = 2;
    s2.name = "Terry Myers";
    s2.grade_point = 8.95;

    cout << "Enter for s3: student_id: ";
    cin >> s3.student_id;
    cout << "Enter for s3: name: ";
    cin >> s3.name;
    cout << "Enter for s3: grade_point: ";
    cin >> s3.grade_point;

    cout << "Id: " << s1.student_id << ", "
         << "Name: " << s1.name <<", "
         << "Grade Point: " << s1.grade_point << endl;

    cout << "Id: " << s3.student_id << ", "
         << "Name: " << s3.name <<", "
         << "Grade Point: " << s3.grade_point << endl;


    Student snew = {69,"Roman",100};
    cout << endl;
    cout << snew.student_id << " " << snew.name << " " << snew.grade_point << endl << endl;

    cout << sizeof(r1); // actual size of r1 is 4 + 4 + 1 = 9 bytes but its printing 12 because its easier for compiler to take round off values.
    return 0;
}
