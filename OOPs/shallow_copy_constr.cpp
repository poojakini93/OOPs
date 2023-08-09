#include <iostream>

using namespace std;

class Shallow
{
private:
    int *data;

public:
    void set_data(int d)
    {
        *data = d;
    }

    int get_data()
    {
        return *data;
    }

    // constructor
    Shallow(int d);

    // copy constructor
    Shallow(const Shallow &source);

    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
    cout<<"inside constructor "<<endl;
}

Shallow ::Shallow(const Shallow &source) : data(source.data)
{
    cout << get_data() << " inside copy constr"<<endl;
}

Shallow::~Shallow()
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s)
{
    cout << "inside shallow constructor "<<s.get_data() << endl;
}

int main()
{
    Shallow obj(100);
    display_shallow(obj);
    Shallow obj2(obj);
    obj2.set_data(1000);
    Shallow obj3(9);
}
