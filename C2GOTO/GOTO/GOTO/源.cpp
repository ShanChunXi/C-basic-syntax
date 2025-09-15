#include<iostream>
using namespace std;
int main() {
	cout << "1" << endl;
	goto flag;
	cout << "2" << endl;
flag:
	cout << "3" << endl;
	return 0;

}