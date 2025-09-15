#include<iostream>
using namespace std;
#include"swap.h"
void swap(int num1,int num2) {
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << endl;
	cout << num2 << endl;
}