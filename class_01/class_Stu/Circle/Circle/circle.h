#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class circle
{
private:
	int c_r;
	point c_center;
public:
	void setr(int r);
	int getr();
	void setc(point c);
	point getc();
};
