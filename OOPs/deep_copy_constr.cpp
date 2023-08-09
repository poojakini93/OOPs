#include<iostream>

using namespace std;
class Deep
{
        int *data;
    public:
        void set_data(int d) { *data=d;}
        int get_data() { return *data;}

        //constructor
        Deep(int d);

        //copy constructor
        Deep(const Deep &source);

        //destructor
        ~Deep();
};

Deep::Deep(int d)
{
    data=new int;
    *data =d;
    // cout<<*data<<endl;
}

Deep:: Deep(const Deep &source) 
: Deep(*source.data)
{
    cout<<"copy constructor: deep copy"<<endl;
}

Deep::~Deep()
{
    delete data;
    cout<<"Destructor freeing data "<<endl;
}

void display_deep(Deep d)
{
    cout<<d.get_data()<<endl;
}
int main()
{
    Deep obj1{100};
    display_deep(obj1);
    Deep obj2{obj1};
    obj2.set_data(1000);
}