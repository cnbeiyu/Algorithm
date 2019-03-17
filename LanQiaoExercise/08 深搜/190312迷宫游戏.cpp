#include <iostream>
// S**.  S起点 T终点 *墙壁
// ....
// ***T
using namespace std;
int x, y;
int n, m;
string maze[110];
bool vis[1000][1000];
bool in(int x, int y)
{
	if (0 <= x && x <= n && 0 <= y && y <= m)
	{
		return true;
	}
	else {
		return false;
	}
}
bool dfs(int x, int y)
{
	if (maze[x][y] == 'T')
	{
		return true;
	}
	vis[x][y] = 1;
	maze[x][y] = 'm';
	int tx = x - 1, ty = y;
	if (in(tx, ty) && maze[tx][ty] != '*' && !vis[tx][ty])
	{
		if (dfs(tx, ty))
		{
			return true;
		}
	}
	tx = x , ty = y + 1;
	if (in(tx, ty) && maze[tx][ty] != '*' && !vis[tx][ty])
	{
		if (dfs(tx, ty))
		{
			return true;
		}
	}
	tx = x + 1 , ty = y;
	if (in(tx, ty) && maze[tx][ty] != '*' && !vis[tx][ty])
	{
		if (dfs(tx, ty))
		{
			return true;
		}
	}
	tx = x , ty = y - 1;
	if (in(tx, ty) && maze[tx][ty] != '*' && !vis[tx][ty])
	{
		if (dfs(tx, ty))
		{
			return true;
		}
	}
	vis[x][y] = 0;
	maze[x][y] = '.';
	return false;

}
int main(int argc, char const *argv[])
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> maze[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; i < m; ++i)
		{
			if (maze[i][j] == 'S')
			{
				x = i, y = j;
			}
		}
	}
	if (dfs(x, y))
	{
		for (int i = 0; i < n; ++i)
		{
			cout << maze[i] << endl;
		}
	} else {
		cout << "no";
	}
	return 0;
}