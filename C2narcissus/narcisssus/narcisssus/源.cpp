#include<iostream>
using namespace std;
int main()
{
	int i = 100;
	int a = 0, b = 0, c = 0;
	while (i < 1000) 
	{
		
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c) 
		{
			cout << i << endl;
		}

		i++;
	}
	return 0;
}











