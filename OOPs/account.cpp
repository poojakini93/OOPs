#include<iostream>
#include<vector>
using namespace std;


class Account
{
	public:
		Account()
		{
			cout<<"Hello"<<endl;
		}
		Account(char b)
		{
			cout<<"2 arg "<<b<<endl;
		}
		
		~Account()
		{
			cout<<"destructor called"<<endl;
		}
};
int main()
{
	Account frank_ac(100);
	Account jim_ac;

	//Account accounts[]{frank_ac};
	//accounts[0] =frank_ac;	
	vector<Account> acc_1; 
	acc_1.push_back(jim_ac);
	
	 acc_1.pop_back();
	
}
