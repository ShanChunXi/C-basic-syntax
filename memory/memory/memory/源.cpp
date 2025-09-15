#include<iostream>
using namespace std;
//global
int g_s = 10;
//全局常量
const int g_c = 20;
int* func() {
	//局部变量
	int* p=new int(10);
	//局部常量
	return p;
}

int main() {
	static int a = 10; //static
	//在堆区开辟数据
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;



	return 0;
}