#include<iostream>
using namespace std;
class stu 
{
public:
	static int a;
	static void func() 
	{
		cout << "static void func" << endl;
	}
};
int stu::a = 10;
void test01() 
{
	stu p;
	cout << p.a << endl;
	stu p2;
	p2.a = 200;
	stu::a = 300;
	cout << p2.a << endl;
}
void test02()
{
	stu y;
	y.func();
	stu::func();
}
int main() 
{
	test01();
	test02();
	return 0;
}