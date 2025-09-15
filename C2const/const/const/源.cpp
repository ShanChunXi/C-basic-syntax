#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 20;
	int c = 40;
	
	
	
	const int* const r = &c;
	cout << r << " " << *r << endl;
	

	return 0;
}