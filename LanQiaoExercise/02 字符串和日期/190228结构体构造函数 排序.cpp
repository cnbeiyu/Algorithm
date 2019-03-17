#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
	string name;
	int score;
	Student() {} //默认构造函数 不能省略
	Student(string n, int s): name(n), score(s) {} //初始化列表 参数不能省略,大括号一般不写东西
};
int main(int argc, char const *argv[])
{
	Student stu[3];
	for (int i = 0; i < 3; ++i)
	{
		int s;
		string n;
		cin >> n >> s;
		stu[i] = Student(n, s);
	}
	for (int i = 0; i < 3; ++i)
	{
		cout << stu[i].name << stu[i].score;
	}
	return 0;
}