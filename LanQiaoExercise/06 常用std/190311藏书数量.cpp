#include <iostream>
#include <set>
#include <map>
using namespace std;
map<string, int> mp;
int main(int argc, char const *argv[])
{
	int num;
	string name;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		cin >> name;
		mp[name]++;
	}
	cout << mp.size() << endl;
	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}