#include<iostream>
using namespace std;
class person 
{
public:
	int age;
	person()
	{
		cout << "�޲ι��캯���ĵ���" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "�вι��캯���ĵ���" << endl;
	}
	person(const person &p) {
		cout << "�������캯���ĵ���" << endl;
		age = p.age;
	}

	~person()
	{
		cout << "person����������" << endl;
	}

};
void test01() 
{
	//���ŷ�
	person p(10);
	person p3(p);
	cout << p3.age << endl;
	//��ʾ��
	person p4 = person(20);
	person p5 = person(p4);
}
int main() {
	test01();

	return 0;
}