#include<iostream>
using namespace std;
class person {

public:
	int age;
	person(int age) 
	{
		this->age = age;
	}
	person &personaddp(person& p) 
	{
		this->age += p.age;
		return *this;
	}
};
void test01(){
	person p1(18);
	cout << p1.age << endl;
}
void test02(person &p) {
	person p2(10);
	p2.age += p.age;
	cout << p2.age << endl;
}
void test03() 
{
	person p1(10);
	person p2(10);
	p2.personaddp(p1).personaddp(p1);
	cout << p2.age << endl;
}


int main() 
{
	person p(10);
	test01();
	test02(p);
	test03();
	return 0;
}