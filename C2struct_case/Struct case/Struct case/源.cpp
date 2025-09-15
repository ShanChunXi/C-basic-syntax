#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};


struct Teacher {
	string tname;
	struct Student sarr[5];

};
void allocateSpace(struct Teacher tarray[],int len) 
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++) 
	{
		tarray[i].tname = "Teacher_";
		tarray[i].tname += nameSeed[i];
		for (int j = 0; j < 5; j++) 
		{
			tarray[i].sarr[j].name = "Student_";
			tarray[i].sarr[j].name += nameSeed[j]; 
			int random = rand() % 61+40;
			tarray[i].sarr[j].score = random;
		}
	}

}
void printinfo(struct Teacher tarray[], int len)
{	
	for (int i = 0; i < len ;i++) 
	{
		cout << tarray[i].tname << endl;
		for (int j = 0; j < 5; j++) 
		{	
			cout << tarray[i].sarr[j].name << ":" << tarray[i].sarr[j].score << endl;
		}
	
	}


}
int main() 
{
	srand((unsigned int)time(NULL));
	struct Teacher tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allocateSpace(tarray, len);
	printinfo(tarray, len);
	return 0;
}