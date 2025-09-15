#include<iostream>
using namespace std;
int main()
{
	/*int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;*/
	/*int arr[2][3] = { 
		{1,2,3},
		{4,5,6} 
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/
	int arr[3][3] = { 
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	for (int i = 0; i < 3; i++)
	{
		int flag = 0;
		for (int j = 0; j < 3; j++) {
			flag += arr[i][j];
		}
		cout << flag << endl;
	}
	return 0;
}