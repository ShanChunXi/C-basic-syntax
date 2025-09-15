#include<iostream>
using namespace std;
#include<string>
struct Student {
	string name;
	int age;
	int score;
};
struct Teacher{
	int code;
	struct Student stu;
};
int main() {
	Teacher t = { 50 };
	t.stu.name = "zhang";
	t.stu.age = 20;
	cout << t.code << " " << t.stu.name << endl;

	return 0;
}
