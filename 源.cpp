#include<iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
}s3;
int main() {
	struct Student s1;
	s1.name = "wang";
	s1.age = 10;
	s1.score = 90;
	cout << s1.name << endl;
	cout << s1.age << endl;
	cout << s1.score << endl;
	struct Student s2 = { "Li",22,900 };
	cout << s2.name << endl;
	cout << s2.age << endl;
	cout << s2.score << endl;
	s3.name = "zaho";
	cout << s3.name << endl;
	struct Student stuarr[3] =
	{ 
		{"张三",10,80},
		{"李四",11,90 },
		{"王五",33,39}
	};
	for (int i = 0; i < 3; i++) {
		cout << stuarr[i].name 
			<< " " << stuarr[i].age
			<< " " << stuarr[i].score << endl;
	}
	Student* p = &s1;
	cout << p->score << endl;
	return 0;
}