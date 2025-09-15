#include<iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
void printstu1(struct Student s) {
	s.score = 1000;
	cout << s.name << endl;
	cout << s.age << endl;
	cout << s.score << endl;

}
void printstu2(const struct Student* s) {
	
	cout << s->name<<endl;
	cout << s->age << endl;
	cout << s->score << endl;
}
int main() 
{
	Student s1 = { "zhang",10,90 };
	printstu1(s1);
	cout << s1.score << endl;
	printstu2(&s1);
	cout << s1.score << endl;
	return 0;
}