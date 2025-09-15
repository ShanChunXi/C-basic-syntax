#include<iostream>
#include<string>
using namespace std;
class Cube {
private:
	int m_l;
	int m_w;
	int m_h;
public:
	void setl(int l) {
		m_l = l;
	}
	void setw(int w) {
		m_w = w;
	}
	void seth(int h) {
		m_h = h;
	}
	int getl() 
	{
		return m_l;
	}
	int getw()
	{
		return m_w;
	}
	int geth()
	{
		return m_h;
	}
	int calculateV() 
	{
		int v = m_h * m_l * m_w;
		return v;
	}
	int calculateS() {
		int s = 2 * (m_h * m_l + m_h * m_w + m_w * m_l);
		return s;
	}
	bool isSame1(Cube &c) 
	{
		if (getl() == c.getl() && getw() == c.getw() && geth() == c.geth())
		{
			return true;


		}
		return false;
	}
};
bool isSame(Cube& c1, Cube& c2) 
{
	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
	{
		return true;


	}
	return false;
}

int main() 
{
	Cube c1;
	c1.setl(10);
	c1.setl(11);
	c1.seth(10);
	c1.setw(10);
	cout << c1.calculateV() << endl;
	cout << c1.calculateS() << endl;
	Cube c2;
	c2.setl(10);
	c2.seth(10);
	c2.setw(10);
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "Same" << endl;
	}
	else {
		cout << "no" << endl;
	}
	bool ret1 = c1.isSame1(c2);
	if (ret1) {
		cout << "Same" << endl;
	}
	else {
		cout<< "no" << endl;
	}

	return 0;
}