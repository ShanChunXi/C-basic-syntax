#include<iostream>
using namespace std;
int main()
{
	//����
	int a = 10;
	//������
	short b = 10
		;
	//������
	long c = 10;
	//��������
	long long d = 10;
	cout << a << b << c << d << endl;
	//����ʹ��sizeof()�������鿴����������ռ�ڴ�ռ�Ĵ�С
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;

	//������
	float e = 3.14f;
	//˫����
	double f = 3.14;
	float f2 = 3e2;
	cout << sizeof(e) << endl;
	cout << sizeof(f) << endl;
	cout << "f2  =" << f2 << endl;
	//�ַ���
	char g = 'a';
	cout << g << endl;
	cout << (int)g << endl;
	cout << '\\\n' ;
	cout << "aaa\thello" << endl;
	cout << "aaaa\tworld" << endl;
	//C�����ַ���
	char g2[] = "hello";
	cout << g2 << endl;
	//C++�͵��ַ���
	string g3 = "hello C++";
	cout << g3 << endl;
	//��������֮�����ֱ�Ӹ�ֵ
	g3 = "hell";
	cout << g3 << endl;
	//��������
	bool flag = true;
	cout << flag << endl;
	//���ݵ�����
	/*int a1 = 0;
	cin >> a1;
	cout << a1 << endl;*/
	/*char s1 = 'a';
	cin >> s1;
	cout << s1 << endl;*/

	return 0;


}