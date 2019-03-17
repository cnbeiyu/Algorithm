// set中的集合不会重复,如果插入了集合中已存在的元素，不会有任何效果
// 语句：set<T> s
#include <iostream>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
	set<string> country;
	country.insert("China");
	country.insert("America");
	if (country.count("China"))//count:查找元素，返回1/0
	{
		cout << "in" << endl;
	}
	// 遍历需用迭代器，迭代器写法固定,
	// set<T>::iterator it,定义了一个指向set<T>集合的迭代器it
	//begin函数返回容器中起始元素的迭代器，end函数返回容器的尾后迭代器
	for (set<string>::iterator it = country.begin(); it != country.end(); it++)
	{
		cout << *it << endl;
	}
	return 0;
} 0.