#include <iostream>
#include <vector>
using namespace std;
vector<int> v[1000];
int main(int argc, char const *argv[])
{
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		v[i].push_back(i);
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b;
		for (int j = 0; j < v[b].size(); ++j)
		{
			v[a].push_back(v[b][j]);
			v[b].pop_back();
		}
	}
	for (int i = 1; i <= n ; ++i)
	{
		for (int j = 0; j < v[i].size() ; ++j)
		{
			cout << v[i][j] << " ";
		}
	}
	return 0;
}