#include<iostream>
using namespace std;

int main()
{
	//算术运算符
	// add
	int a = 10, b = 20;
	cout << "a+b=" << a + b << endl;
	//subtract
	cout << "b-a=" << b - a << endl;
	//multiply
	cout << "a*b=" <<a*b  << endl;
	//divide
	cout << "b/a=" << b/a << endl;
	//modulus
	cout << "b%a=" << b%a << endl;
	//前置递增
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;
	cout << a2 << endl;

	//后置递增
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;
	cout << a3 << endl;

	//赋值运算符
	int a4 = 10;
	a4 = 100;
	a4 += 2;
	cout << a4 << endl;
	//关系运算符
	int c1 = 10, c2 = 11;
	cout << (c1 == c2)<< endl;
	cout << (c1 != c2) << endl;
	cout << (c1 > c2) << endl;
	//优先级问题
	//逻辑运算符
	int d1 = 10, d2 = 20, d3 = 30,d4=0;
	//非!
	//与&&
	//或||
	cout << !d1 << endl;
	cout << (d1 && d2) << endl;
	cout << (d1 || d4) << endl;
	return 0;








}