#include<iostream>
using namespace std;
int function(int a, int b , int c );
int function(int a, int b=10 , int c=20 )
{
	return a + b + c;
}
int main() {
	int d =function(10, 20,5);
	cout << d << endl;
	return 0;
}