#include<iostream>
using namespace std;
//global
int g_s = 10;
//ȫ�ֳ���
const int g_c = 20;
int* func() {
	//�ֲ�����
	int* p=new int(10);
	//�ֲ�����
	return p;
}

int main() {
	static int a = 10; //static
	//�ڶ�����������
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;



	return 0;
}