#include<iostream>

using namespace std;

class Base
{
	public:
		int a{};
	protected:
		int b{};
	private:
		int c{};
};

class Derived: protected Base
{
	public:
		int d{};
		void access_data()
		{
			a=100;
			b=200;
			//c=300;
			cout<<a<<" "<<b<<endl;
		}
		
};

int main()
{
	Base ba;
	ba.a=10;
	//ba.b=20;
	//ba.c=30;
	cout<<ba.a<<" ";
	
	Derived bb;
	bb.d=10;
	//bb.b=20;
	//ba.c=30;
	cout<<bb.d<<" ";
	bb.access_data();
}
