#include<iostream>
using namespace std;
class home {
	friend void func(home* home);
public:
	string m_meeting;
	home() 
	{
		m_meeting = "mee";
		m_bedroom = "bed";
	}
	
private:
	string m_bedroom;

};
void func(home *home) 
{
	
	cout << home->m_meeting << endl;
	cout << home->m_bedroom << endl;
	home->m_bedroom = "d";
	cout << home->m_bedroom << endl;
}

int main()
{
	home h1;
	
	func(&h1);
	return 0;
}