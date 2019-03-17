//映射是指两个集合之间的元素的相互对应的关系
//通俗地说就是一个元素对应另一个元素，2个集合分为关键字集合和值集合
//语句：map<T1,T2> m,定义了一个名为m的从T1类型到T2类型的映射,如map<string,int> m
#include <map>
#include <string>
#include <utility>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	map<string, int> dict;
	dict.insert(make_pair("Tom", 1)); //等于dict["Tom"]=1;
	dict.insert(make_pair("Mary", 1)); //等于dict["Mary"]=1
	dict.insert(make_pair("Jone", 2)); //等于dict["Jone"]=2
	dict.insert(make_pair("Tom", 2)); //key已存在，词条语句无效
	cout << "Mary is:" << dict["Mary"] << endl;
	if (dict.count("Mary"))//判断是否有映射
	{
		cout << "Mary is 1" << endl;
	}

	for (map<string, int>::iterator it = dict.begin(); it != dict.end(); it++)
	{
		cout << it->first << "-" << it->second << endl;
	}
	return 0;
}
