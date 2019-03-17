#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct Student
{
	char name[15];
	int score[4];
	// Student() {};
	// Student(string n, int math, int chn, int eng, int geo): name(n), score[1](chn), score[2](eng), score[3](geo) {}
};
bool cmp(Student x, Student y) {
	int xsum = x.score[0] + x.score[1] + x.score[2] + x.score[3];
	int ysum = y.score[0] + y.score[1] + y.score[2] + y.score[3];
	return xsum > ysum;
}

Student stu[100];
int main(int argc, char const *argv[])
{
	int n;
	char name[15];
	int math, chn, eng, geo;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> name >> math >> chn >> eng >> geo;
		strcpy(stu[i].name, name);
		stu[i  ].score[0]   = math;
		stu[i].score[1] = chn;
		stu[i].score[2] = eng;
		stu[i].score[3] = geo;
	}
	sort(stu, stu + n, cmp);
	for (int i = 0; i < 3; ++i)
	{
		cout << stu[i].name;
	}
	return 0;
}