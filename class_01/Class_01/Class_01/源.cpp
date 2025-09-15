#include<iostream>
using namespace std;
const double PI = 3.14;

class Circle 
{
	//∑√Œ »®œﬁ
public:
	double M_r;
	double calculateZC() 
	
	{
		return 2 * PI * M_r;
	}


};
int main() 
{
	Circle C1;
	C1.M_r = 2;
	cout << C1.calculateZC() << endl;
	
	return 0;
}