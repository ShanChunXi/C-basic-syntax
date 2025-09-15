#include<iostream>
using namespace std;
void swap(int& a, int& b) 
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	
}
int& quote()
{
	int a = 10;
	return a;
}
int& quote2() 
{
	static int a = 10;
	return a;
}
int main() 
{
	//int b = 20;
	//const int* p = &b;
	//int a = 10;
	//p = &a;
	//
	//int& c = a;
	//int a = 10;
	//int b = 20;
	//swap(a, b);
	//cout << a << endl;
	//cout << b << endl;
	//int &c = quote();
	//cout << c << endl;
	int& ref = quote2();
	quote2() = 1000;
	cout << ref << endl;
	
	return 0;
}