//Topic: OOP
//Description: Dynamic Polymorphism

#include<iostream>
using namespace std;

class Employee
{
    protected:
        string name;
        int age;
        double hoursWorked;

    public:
        Employee()
        {
            this->name = "Testbug";
            this->age = 18;
            this->hoursWorked = 6.5;
        }

        Employee(string name, int age, double hoursWorked)
        {
            this->name = name;
            this->age = age;
            this->hoursWorked = hoursWorked;
        }

        double getSalary()
        {
            return hoursWorked * 2;
        }

        virtual double getSpecial()
        {
            double reward;
            reward = hoursWorked * 4;
            return reward;
        }

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age :" << age << endl;
            cout << "Hours Worked: " << hoursWorked << endl;
            cout << "Salary: $" << getSalary() << endl;
            cout << "Reward: $" << getSpecial() << endl << endl;
        }

};


class Manager:public Employee
{
    private:
        double bonus;

    public:
        Manager():Employee()
        {

        }
        Manager(string n, int a, double hW):Employee(n,a,hW)
        {
            bonus = 10;
        }

        double getSpecial()
        {
            double temp = Employee::getSpecial();
            temp = temp * bonus;
            return temp;
        }


};

class Assistant:public Employee
{
    private:
        double bonus;

    public:
        Assistant():Employee()
        {

        }
        Assistant(string n, int a, double hW):Employee(n,a,hW)
        {
            bonus = 5;
        }

        double getSpecial()
        {
            double temp = Employee::getSpecial();
            temp = temp * bonus;
            return temp;
        }


};

class Janitor:public Employee
{
    private:
        double bonus;

    public:
        Janitor():Employee()
        {

        }
        Janitor(string n, int a, double hW):Employee(n,a,hW)
        {
            bonus = 2;
        }

        double getSpecial()
        {
            double temp = Employee::getSpecial();
            temp = temp * bonus;
            return temp;
        }


};

class Club
{
    public:
        string getMembership(Employee *p)
        {
            double salary = p->getSalary();
            if (salary <= 10)
                return "Red";
            else if (salary > 10 && salary <=50)
                return "White";
            else
                return "Black";
        }
};

int main()
{
    Club c1,c2,c3;
    cout << c1.getMembership(new Manager("A",15,2)) << endl;
    cout << c2.getMembership(new Assistant("B",15,6)) << endl;
    cout << c3.getMembership(new Janitor("C",15,100)) << endl;
}
