#include<iostream>
using namespace std;
class person
{
	friend ostream& operator<<(ostream& cout, person& p);
private:
	int m_a = 10;
	int m_b = 20;

};
ostream & operator<<(ostream &cout,person &p ) 
{
	cout << p.m_a << " " << p.m_b;
	return cout;
}
int main() 
{
	person p;
	cout << p << endl;
}