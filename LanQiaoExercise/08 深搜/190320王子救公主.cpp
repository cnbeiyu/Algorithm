#include <iostream>
using namespace std;
char map[100][100];
bool vis[100][100][5];
int n, m, ans;
bool in(int x, int y)
{
	return 0 <= x && x < n && 0 <= y && y < m;
}
void dfs(int x, int y, int d)
{
	if (!in(x, y) || !vis[x][y])
	{
		return;
	}
	vis[x][y][2 - d] = true;
	dfs(x, y + 2 - d, d);
	dfs(x, y - (2 - d), d);
	dfs(x + 2 - d, y, d);
	dfs(x - (2 - d), y, d);

}
int main(int argc, char const *argv[])
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; i < m; ++j)
		{
			cin >> map[n][m];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (map[n][m] == 'w')
			{
				dfs(n, m, 0);
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (map[n][m] == 'g')
			{
				dfs(n, m, 1);
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (vis[n][m][1] && vis[n][m][2])
			{
				cout << "yes";
				return 0;
			}
		}
	}



	return 0;
}