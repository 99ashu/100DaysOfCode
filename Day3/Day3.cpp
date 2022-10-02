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
            bonus = 2;
        }

        double getSpecial()
        {
            double temp = Employee::getSpecial();
            temp = temp * bonus;
            return temp;
        }


};

int main()
{
    Employee e2("John", 20, 24);
    e2.display();

    Manager m2("John", 20, 24);
    m2.display();

    Manager *m4 = new Manager ("John", 20, 24);
    cout << m4->getSpecial() << endl;

    Employee *e4 = new Manager ("John", 20, 24); //Dynamic Polymorphism
    cout << e4->getSpecial() << endl;
}
