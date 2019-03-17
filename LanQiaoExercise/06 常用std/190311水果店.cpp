#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string, map<string, int>>mp;
int main(int argc, char const *argv[])
{
	int n;
	string location, fruit;
	int num;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> fruit >> location >> num;
		mp[location][fruit] += num;
	}
	for (map<string, map<string, int>>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << it->first << endl;
		for (map<string, int>::iterator itt = (it->second).begin(); itt != (it->second).end(); itt++) {
			cout << "   |---" << itt->first << "-" << itt->second << endl;
		}
	}
	return 0;
}