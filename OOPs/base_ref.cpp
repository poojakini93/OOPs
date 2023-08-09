#include<iostream>
using namespace std;

class Account
{
    public:
        void nthng(Account &ac,double amt)
        {
            ac.withdraw(amt)
            {
                cout<<amt;
            }
        }
        
};
/*Account:: public withdraw(double s)
        {
            cout<<s<<endl;
        }*/

int main()
{
    Account a;
    Account &ref=a;
    ref.with_draw(1000);
}