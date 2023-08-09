#include<iostream>
#include<string>
using namespace std;

class Player
{
	private:
		string name{"XXX"};
		int health{},xp{};
	public:
		Player();
		Player(string);
		Player(string,int,int);
};

Player::Player() 
: name{"none"}, health{0},xp{0}
{
	cout<<name<<endl;
}

Player::Player(string name_val) 
: name{name_val},health{0},xp{0}
{
	cout<<name<<endl;
}

Player::Player(string name_val, int health_val, int xp_val) 
: name{name_val},health{health_val},xp{xp_val}
{
	cout<<name<<endl;
}
int main()
{
	Player P;
	Player p1("pooja");
	Player p2("kini",10,100);
}
