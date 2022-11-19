// Topic: Template
// Description: Function Template

/*
This program shows an example of how we can use template with functions.
*/

#include <iostream>
#include <sstream>

using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    int getAge() const{
        return age;
    }
    string getName() const {
        return name;
    }
    bool operator < (const Person& p) const{
        return this->getAge() < p.getAge();
    }
    bool operator > (const Person& p) const{
        return this->getAge() > p.getAge();
    }
};


template <typename T>
int compareTo(T a, T b)
{

    if (a < b){
        return -1;
    }
    else if(a > b){
        return +1;
    }
    else{
        return 0;
    }
}

int main()
{
    int x = 10, y = 100, i;
    i =  compareTo(x, y);
    cout << "i = " << i << endl;

    double d1 = 10.7, d2 = 9.0;
    i = compareTo(d1, d2);
    cout << "i = " << i << endl;

    string s1 = "John";
    string s2 = "Alice";
    i = compareTo(s1, s2);
    cout << "i = " << i << endl;

    Person p1 ("A",10), p2("B", 20);
    i = compareTo(p1, p2);
    cout << "i = " << i << endl;

   return 0;
}
