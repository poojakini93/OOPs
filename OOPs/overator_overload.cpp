// Equal == Operator Overloading in C++ and Object Oriented Programming (OOP)
// Program to overload the Equal == operator


#include<iostream>
using namespace std;
class T4Tutorials
{
	private :
		int num;
	public :
		void input()
		{
			cin>>num;
            //cout<<num<<endl;
		}
		int operator ==(T4Tutorials x)
		{
            // cout<<num<<endl;
            // cout<<x.num<<endl;
			if(num==x.num)
			return 1;
			else
			return 0;
		}
};
int main()
{
	T4Tutorials n1,n2;
	cout<<"Please  enter 1st number.  ";
	n1.input();
	cout<<" Please  enter 1st number.";
	n2.input();
	if(n1==n2)
	{
		cout<<"n1 is equal to n2. ";
	}
	else
	{
		cout<<"n1 is not equal to n2. ";
	}
    return 0;
}