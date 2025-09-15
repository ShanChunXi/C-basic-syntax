#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"


	void circle::setr(int r)
	{
		c_r = r;
	}
	int circle::getr()
	{
		return c_r;
	}
	void circle::setc(point c)
	{
		c_center = c;
	}
	point circle::getc()
	{
		return c_center;
	}
