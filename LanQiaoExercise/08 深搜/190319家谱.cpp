#include<iostream>
#include <vector>
using namespace std;
std::vector<int> v[1000];
bool f[1000];
int ans[1000];
int n, x, y, u;

int dfs(int x)
{
	int ret = 0;
	for (int i = 0; i < v[x].size; ++i)
	{
		ret += dfs(son[u][i]);
	}
	return ret + 1;
}
int main(int argc, char const *argv[])
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		v[x].push_back(y);
		f(y) = true;
	}
	for (int i = 1; i <= n; ++i)
	{
		if (!v[i])
		{
			u = i;
			break;
		}
	}
	dfs(u);
	return 0;
}