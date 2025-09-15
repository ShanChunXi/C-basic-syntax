#include<iostream>
using namespace std;
#include<string>
class Phone {
	
public:
	string pname;
	Phone(string pn) :pname(pn)
	{
	}
};
class person {
public:
	string name;
	Phone phone;
	person(string na, string pname) :name(na), phone(pname)
	{
	}

};
void test01() 
{
	
	Phone phone("star");
	person p("уехЩ","star");
	cout << p.name << endl;
	cout << p.phone.pname << endl;

}

int main() 
{
	test01();
	return 0;
}