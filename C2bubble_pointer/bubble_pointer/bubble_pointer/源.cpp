#include<iostream>
using namespace std;
void bubblesort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			int temp = 0;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}

	}
}
void pointercout(int* arr,int len) {
	for (int k = 0; k < len; k++) {
		cout << arr[k] << endl;
	}
}
int main() {
	int arr[] = { 4,3,2,1,5,6,9,8,7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, len);
	pointercout(arr, len);
	cout << arr << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}