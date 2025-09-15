#include<iostream>
#include"swap.h"
using namespace std;
void swap02(int* p,int* q) {
	int temp = 0;
	temp = *p;
	*p = *q;
	*q = temp;
	cout << *p << endl;
	cout << *q << endl;

}
int main()
{
	int a = 8;
	int b = 10;
	swap(8, 10);
	swap02(&a, &b);
	cout << a << "  " << b << endl;

	return 0;
}