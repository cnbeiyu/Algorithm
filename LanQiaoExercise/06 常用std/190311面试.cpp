#include <iostream>
#include <map>
using namespace std;
map<int, int> mp;
int main(int argc, char const *argv[])
{
	int n, m;
	int ans1 = 0, ans2 = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> m;
		mp[m]++;
	}
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		if ((it->second) > ans2)
		{
			ans1 = (it->first);
			ans2 = (it->second);
		}
	}
	cout << ans1 << " " << ans2;
	return 0;
}