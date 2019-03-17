#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> vec;
	vec.push_back(1);//在数组最后插入一个新元素
	vec.push_back(2);
	vec.push_back(3);
	for (int i = 0; i < vec.size(); ++i)//size()返回ventor元素数量
	{
		cout << vec[i] << endl;
	}
	vec.pop_back();//删除数组最后一个元素
	vec.clear();//清空数组

	vector<vector<int> > vec2(10, vector<int>(5));
	for (int i = 0; i < vec2.size(); ++i)
	{
		vec2[i].push_back(i);
	}
	return 0;

}