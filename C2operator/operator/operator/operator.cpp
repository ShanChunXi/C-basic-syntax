#include<iostream>
using namespace std;

int main()
{
	//���������
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
	//ǰ�õ���
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;
	cout << a2 << endl;

	//���õ���
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;
	cout << a3 << endl;

	//��ֵ�����
	int a4 = 10;
	a4 = 100;
	a4 += 2;
	cout << a4 << endl;
	//��ϵ�����
	int c1 = 10, c2 = 11;
	cout << (c1 == c2)<< endl;
	cout << (c1 != c2) << endl;
	cout << (c1 > c2) << endl;
	//���ȼ�����
	//�߼������
	int d1 = 10, d2 = 20, d3 = 30,d4=0;
	//��!
	//��&&
	//��||
	cout << !d1 << endl;
	cout << (d1 && d2) << endl;
	cout << (d1 || d4) << endl;
	return 0;








}