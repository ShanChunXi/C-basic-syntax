#include<iostream>
using namespace std;
#include<string>
int* func1() 
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) 
	{
		arr[i] = 10 + i;
	}
	return arr;
	
}
void func2() 
{
	int* arr = func1();
	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
}
string* func() 
{
	string* p = new string("str");
	return p;

}
void test()
{
	string* p = func();
	cout << *p << endl;
	delete p;
}
int main() 
{
	test();
	func2();
	return 0;
	const int& d = 10;
}