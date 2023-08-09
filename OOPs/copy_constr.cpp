#include<iostream>
#include<string>
using namespace std;

class Player
{
	private:
		string name{"XXX"};
		int health{},xp{};
    public:
        string get_name() { return name;}
        int get_health() {return health;}
        int get_xp() { return xp;}
            
        Player(string name_val="none", int health_val=0, int xp_val=0);

        //copy constructor
        Player(const Player &source);

        //destructor
        ~Player() ;
        
};


Player::Player(string name_val, int health_val, int xp_val) 
: name{name_val},health{health_val},xp{xp_val}
{
	cout<<"Three arg constructor for "+ name<<endl;
}

Player::Player(const Player &source) 
: name{source.name}, health{source.health}, xp{source.xp}
//:Player{source.name, source.health, source.xp}               // delegat
{
    cout<<"copy constructor "+source.name<<endl;
}

void display(Player p)
{
    cout<<p.get_name()<<endl<<p.get_health()<<endl<<p.get_xp()<<endl;
}

Player::~Player()
{ 
    cout<<"destructor called "+name <<endl; 
}
int main()
{
	Player P1{"XXX",10,100};
	Player p2{"empty"};
	Player p3{"kini",10};
    Player p4{P1};
    //display(p3);
}
