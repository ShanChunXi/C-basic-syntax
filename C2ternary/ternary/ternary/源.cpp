#include<iostream>
using namespace std;

int main() {
	int a = 10, b = 20,c=0;
	c = a > b ? a : b;
	cout << c << endl;
	a > b ? a : b = 100;//��Ԫ��������ص���һ������
	cout << a << " " << b << endl;

	return 0;

}