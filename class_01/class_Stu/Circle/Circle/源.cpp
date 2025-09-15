#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"
#include"isInCircle.h"
int main() 
{
	point p1;
	p1.setx(10);
	p1.sety(0);
	circle c1;
	c1.setr(10);
	c1.setc(p1);
	point p2;
	p2.setx(12);
	p2.sety(10);
	isInCircle(c1, p2);
	
	return 0;
}