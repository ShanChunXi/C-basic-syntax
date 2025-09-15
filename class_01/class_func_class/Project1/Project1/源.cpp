#include<iostream>
using namespace std;
class person 
{
public:
	mutable int m_a;
	int m_b;
	void func() const
	{
		m_a = 100;
		cout << m_a << endl;
		m_a = 200;
		cout << m_a << endl;
	}


};
void test01() 
{
	person p1;
	p1.func();
}

int main()
{
	test01();
	return 0;
}