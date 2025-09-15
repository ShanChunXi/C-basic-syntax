#include<iostream>
#include"swap.h"
using namespace std;

int add(int num1, int num2) {
	int num = num1 + num2;
	return num;
}




int main() {
	int a = 10, b = 20;
	cout << add(a, b)<<endl;
	swap(a, b);
	return 0;
}
