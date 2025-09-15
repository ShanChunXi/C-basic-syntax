#include<iostream>
using namespace std;
int main()
{
	//整形
	int a = 10;
	//短整形
	short b = 10
		;
	//长整形
	long c = 10;
	//长长整形
	long long d = 10;
	cout << a << b << c << d << endl;
	//可以使用sizeof()函数来查看数据类型所占内存空间的大小
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;

	//单精度
	float e = 3.14f;
	//双精度
	double f = 3.14;
	float f2 = 3e2;
	cout << sizeof(e) << endl;
	cout << sizeof(f) << endl;
	cout << "f2  =" << f2 << endl;
	//字符型
	char g = 'a';
	cout << g << endl;
	cout << (int)g << endl;
	cout << '\\\n' ;
	cout << "aaa\thello" << endl;
	cout << "aaaa\tworld" << endl;
	//C风格的字符串
	char g2[] = "hello";
	cout << g2 << endl;
	//C++型的字符串
	string g3 = "hello C++";
	cout << g3 << endl;
	//声明变量之后可以直接赋值
	g3 = "hell";
	cout << g3 << endl;
	//布尔类型
	bool flag = true;
	cout << flag << endl;
	//数据的输入
	/*int a1 = 0;
	cin >> a1;
	cout << a1 << endl;*/
	/*char s1 = 'a';
	cin >> s1;
	cout << s1 << endl;*/

	return 0;


}