#include<iostream>
using namespace std;
#include<string>
class Stu {
private:
	int score;
public:
	string name;
	void set_score(int score1) 
	{
		if (score1 < 0 || score1 >100) 
		{
			cout << "wrong" << endl;
			return;
		}
		score = score1;
	
	}
	int get_score() 
	{
		return score;
	}
protected:
	int id;

	
	void func() 
	{
		name = "张三";
		id = 12;
		score = 3.3;
	}


};


int main() 
{
	Stu s1;
	s1.name = "历史";
	s1.set_score(9);
	cout << s1.get_score() << endl;
	

	return 0;
}