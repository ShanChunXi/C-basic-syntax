#include<iostream>
using namespace std;
class myInteger
{
	friend ostream& operator<<(ostream& cout, const myInteger& myInt);
public:
	myInteger(int num) :m_num(num)
	{
	}
	myInteger& operator++() 
	{
		m_num++;
		return *this;
	}
	myInteger operator++(int)
	{
		myInteger temp = *this;
		++m_num;
		return temp;
	}
private:
	int m_num;

};
ostream& operator<<(ostream& cout, const myInteger& myInt)
{
	cout << myInt.m_num;
	return cout;
}
void test01() 
{
	myInteger myInt(10);
	cout << ++myInt << endl;
	cout << ++myInt << endl;
	
}
void test02()
{
	myInteger myInt(10);
	cout << myInt++ << endl;
	cout << myInt << endl;

}
int main(){
	test01();
	test02();
	return 0;
}