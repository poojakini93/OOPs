#include<iostream>
using namespace std;

class GF
{
    public:
        GF()
        {
            cout<<"Grand Father\n";
        }

        ~GF()
        {
            cout<<"gf destr\n";
        }
};

class F: GF         //default public
{
    public:
        F()
        {
            cout<<"Father \n";
        }

        ~F()
        {
            cout<<"f destr\n";
        }
};

class C:public F
{
    public:
        C()
        {
            cout<<"Child \n";
        }

        ~C()
        {
            cout<<"c destr\n";
        }
};

int main()
{
    GF g;
    F f;
    C c;
}
