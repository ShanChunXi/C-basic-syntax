#include<iostream>
using namespace std;
int main() {
	int a = 0;
	cout << "��ѡ������Ѷ�" << endl;
	cout << "1.��" << endl;
	cout << "2.��ͨ" << endl;
	cout << "3.����" << endl;
	cin >> a;
	switch (a) {
	case 1:
		cout << "��" << endl;
	case 2:
		cout << "��ͨ" << endl;
	case 3:
		cout << "����" << endl;
	default:
		cout << "�������" << endl;
		break;
	}
	return 0;
}