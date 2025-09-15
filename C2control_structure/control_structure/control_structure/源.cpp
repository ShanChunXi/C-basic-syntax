#include<iostream>
using namespace std;
int main() {

	/*cout << "请输入一个分数" << endl;
	int score;
	cin >> score;
	if (score >= 600) {
		cout << "考上了" << endl;

	}
	if (score > 300) {
		cout << "二本" << endl;
	}
	else if (score > 200) {
		cout << "三本" << endl;



	}
	else {
		cout << "没考上" << endl;
	}*/
	//嵌套if语句
	/*int score = 0;
	cout << "您的分数";
	cin >> score;
	if (score > 500)
	{
		if (score > 600)
		{
			cout << "考入中国矿大" << endl;
		}
		else if (score>555)
		{
			cout << "考入一本" << endl;
		}
		else
		{
			cout << "二本" << endl;
		}
	}
	return 0;

}*/
	//三只小猪称体重
	int a=0, b=0, c=0;
	cout << "小猪A的体重"<<endl;
	cin >> a;
	cout << "小猪B的体重"<<endl;
	cin >> b;
	cout << "小猪C的体重"<<endl;
	cin >> c;
	if (a > b) {
		if (a > c) {
			cout << "小猪A最重" << endl;


		}
		else {
			cout << "小猪C最重" << endl;
		}
	}
	else {
		if (b > c) {

			cout << "小猪B最重" << endl;
		}
		else {
			cout << "小猪C最重" << endl;
		}
		
	}


	return 0;

}



			
			
			
			
		
	
	
	
	
	
	















