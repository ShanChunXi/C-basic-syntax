#include<iostream>
using namespace std;
#include<string>
class student 
{
public:
	//���е����Ժ���Ϊ����Ϊ��Ϊ
	string name;
	int ID;
	void  setname(string set_name) 
	{
		name = set_name;
	}
	void setid(int id) 
	{
		ID = id;
	}
	void pt()
	{
		cout << name << " " << ID << endl;
	}

};
int main() 
{
	student s1;
	s1.setname("zhao");
	s1.setid(10);
	s1.pt();
	return 0;
}