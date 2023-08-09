#include<iostream>

using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"base constr\n";
    }

    Base(int a)
    {
        cout<<a<<" int base constr\n";
    }

    ~Base()
    {
        cout<<"int base destr\n";
    }
};

class Derived:public Base
{
    int value;
    public:
        Derived():Base(),value{0}
        {
            cout<<"Derived no-arg constr\n";
        }
        Derived(int x):Base(x),value{x*2}
        {
            cout<<value<<" int derived constr\n";
        }
};

int main()
{
    Base b;
    Derived d{100};
}