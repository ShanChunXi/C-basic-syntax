#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"
void isInCircle(circle& c, point& p)
{
	int s =
		(c.getc().getx() - p.getx()) * (c.getc().getx() - p.getx()) +
		(c.getc().gety() - p.gety()) * (c.getc().gety() - p.gety());
	int R = c.getr();
	if (s > R * R)
	{
		cout << "Íâ" << endl;
	}
	else if (s == R * R)
	{
		cout << "ÉÏ" << endl;
	}
	else {
		cout << "ÄÚ" << endl;
	}

}