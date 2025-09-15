#include<iostream>
using namespace std;
int main(){
	int num = rand() % 100 + 1;
	cout << num << endl;
	int val = 0;
	cin >> val;
	while (val != num) {
		if (val > num) {
			cout << "too big" << endl;


		}
		else {
			cout << "too small" << endl;
		}
		cin >> val;
	
	
	
	}
	cout << "Bingo" << endl;
	return 0;
}