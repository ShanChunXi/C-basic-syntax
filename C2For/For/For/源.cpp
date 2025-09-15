#include<iostream>
using namespace std;
int main() {
	
	/*for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}*/
	for (int i = 1; i <= 100; i++) {

		if (i%7==0) {
			cout << "²Ë" << endl;
		}
		else if (i % 10 == 0) {
			cout << "²Ë" << endl;
		}
		else if (i / 10 == 7) {
			cout << "²Ë" << endl;
		}
		else {
			cout << i << endl;
		}
	}
	return 0;
}