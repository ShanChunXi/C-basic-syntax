#include<iostream>
using namespace std;
class person 
{
	friend void test01();
public:
	int* m_age;
	person(int age) 
	{
		m_age = new int(age);
	}
	~person() 
	{
		if (m_age != NULL) 
		{
			delete m_age;
			m_age = NULL;
		}
	}
	 person& operator=(person& p) 
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);
		return *this;
	}


};
void test01() 
{
	person p1(18);
	person p2(20);
	person p3(30);
	cout << *p1.m_age << endl;
	cout << *p2.m_age << endl;
	p3 =p2 = p1;
	cout << *p1.m_age << endl;
	cout << *p2.m_age << endl;

	cout << *p2.m_age << endl;
}

int main() 
{
	test01();
	return 0;
}
