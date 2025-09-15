#include<iostream>
using namespace std;
class person 
{
public:
	int m_a;
	int m_b;
	person(int a ,int b) :m_a(a),m_b(b)
	{
		
	}
	//person operator+(person& p) 
	//{
	//	person temp(0, 0);
	//	temp.m_a = this->m_a + p.m_a;
	//	temp.m_b = this->m_b + p.m_b;
	//	return temp;
	//}
};
person operator+(person& p1, person& p2) 
{
	person temp(0, 0);
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
void test01() 
{
	person p1(10, 10);
	person p2(20, 40);
	person p3 = p1+p2;
	cout << "p3.m_a = " << p3.m_a << endl;
	cout << "p3.m_b = " << p3.m_b << endl;
}
int main() 
{
	test01();

}