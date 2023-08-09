#include<iostream>
using namespace std;

class base
{
	public:
	int var=10;
};

class derived : public base
{
public:
	derived()
	{
		var=20;
	}
};
	
int main()
{
	derived d;
	cout<<d.var;
	}
	
