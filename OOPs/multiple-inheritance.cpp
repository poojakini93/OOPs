#include<iostream>

using namespace std;

class Person
{
    public:
    Person()
    {
        cout<<"person\n";
    }

    ~Person()
    {
        cout<<"dest person\n";
    }


};

class Employee:public Person
{
    public:
    Employee()
    {
        cout<<"employee\n";
    }

    ~Employee()
    {
        cout<<"dest employee\n";
    }
};

class Student:public Person
{
    public:
    Student()
    {
        cout<<"student\n";
    }

    ~Student()
    {
        cout<<"dest student\n";
    }
};

class Faculty: Employee
{
    public:
    Faculty()
    {
        cout<<"faculty\n";
    }

    ~Faculty()
    {
        cout<<"dest faculty\n";
    }

};

class Administrator: Employee
{
    public:
    Administrator()
    {
        cout<<"administrator\n";
    }

    ~Administrator()
    {
        cout<<"dest administrator\n";
    }
};

class Staff: Employee
{
    public:
    Staff()
    {
        cout<<"staff\n";
    }

    ~Staff()
    {
        cout<<"dest staff\n";
    }
};

class Department_chair:protected Faculty,public Administrator
{
    public:
    Department_chair()
    {
        cout<<"department chair\n";
    }

    ~Department_chair()
    {
        cout<<"dest department chair\n";
    }
};

int main()
{
    Department_chair d;
    // cout<<endl;
    // Administrator a;
}