#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }

    virtual ~Base()
    {
        cout<<"base destructor\n";
    }
};

class Derived : public Base {
   public:
    void print() override {
        cout << "Derived Function" << endl;
    }

    ~Derived()
     {
        cout<<"Destructor derived\n";
     }
};

int main() {
    Derived derived1;
    derived1.print();

    // pointer of Base type that points to derived1
  //  Base* base1 = &derived1;

    // calls member function of Derived class
  //  base1->print();

    return 0;
}