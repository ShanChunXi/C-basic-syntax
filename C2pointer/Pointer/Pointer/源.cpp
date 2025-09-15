#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int* p=&a;
	/*int *pt = (int*)&a*/
	int* ptr = NULL;
	cout << "a=" << a << endl;	
	cout << "*p=" << *p << endl;
	cout << &a << endl;
	cout << p << endl;
	/**p = 1000;
	*ptr = 256; 
	cout << "a=" << a << endl;*/
	 // This will cause a runtime error (dereferencing a null pointer)





	return 0;
}