#include<iostream>
using namespace std;
int main()
{
	/*int a[5];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;

	a[3] = 4;
	a[4] = 5;
	for(int i=0;i<5;i++){
		cout << a[i] << endl;
	}
	short array[5] = { 1,2 };
	cout << array[0] << endl;
	cout << sizeof(array[0]) << endl;
	cout <<(int) array << endl;
	cout << (int)&array[0] << endl;*/
	int arr[] = { 300,350,200,400,250 };
	int flag = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (flag < arr[i]) {
			flag = arr[i];
		}
	}
	cout << flag << endl;
	return 0;
}