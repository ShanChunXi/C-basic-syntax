#include<iostream>
using namespace std;
class person 
{
public:
	int age;
	person()
	{
		cout << "无参构造函数的调用" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "有参构造函数的调用" << endl;
	}
	person(const person &p) {
		cout << "拷贝构造函数的调用" << endl;
		age = p.age;
	}

	~person()
	{
		cout << "person的析构函数" << endl;
	}

};
void test01() 
{
	//括号法
	person p(10);
	person p3(p);
	cout << p3.age << endl;
	//显示法
	person p4 = person(20);
	person p5 = person(p4);
}
int main() {
	test01();

	return 0;
}