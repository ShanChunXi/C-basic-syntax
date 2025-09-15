#include<iostream>
using namespace std;

int main() {
	int a = 10, b = 20,c=0;
	c = a > b ? a : b;
	cout << c << endl;
	a > b ? a : b = 100;//三元运算符返回的是一个变量
	cout << a << " " << b << endl;

	return 0;

}