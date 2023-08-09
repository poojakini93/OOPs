#include<iostream>
#include<vector>

using namespace std;

class Account
{
	private:
		double amt{};
	public:
		void balance()
		{
			cout<<"balance"<<endl;
		}
		void deposit(double a)
		{
			amt=a;
			cout<<amt <<endl;
		}
};
int main()
{
	Account frank_ac;
	frank_ac.balance();
	frank_ac.deposit(100.0);

}

