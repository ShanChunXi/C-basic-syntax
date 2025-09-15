#include<iostream>
using namespace std;
int main() {
	int a = 0;
	cout << "请选择你的难度" << endl;
	cout << "1.简单" << endl;
	cout << "2.普通" << endl;
	cout << "3.困难" << endl;
	cin >> a;
	switch (a) {
	case 1:
		cout << "简单" << endl;
	case 2:
		cout << "普通" << endl;
	case 3:
		cout << "困难" << endl;
	default:
		cout << "输入错误" << endl;
		break;
	}
	return 0;
}