#include <iostream>
using namespace std;
char map[100][100];
bool vis[100][100];
int n, m, ans;
bool in(int x, int y) {
	return 0 <= x && x < n && 0 <= y && y < m;
}
void dfs(int x, int y) {
	if (map[x][y] == 'e') {
		ans++;
		return;
	}
	vis[x][y] = 1;
	int tx = x - 1, ty = y;
	if (in(tx, ty) && !vis[tx][ty] && map[tx][ty])
	{
		dfs(tx, ty);
	}
	tx = x + 1, ty = y;
	if (in(tx, ty) && !vis[tx][ty] && map[tx][ty])
	{
		dfs(tx, ty);
	}
	tx = x, ty = y - 1;
	if (in(tx, ty) && !vis[tx][ty] && map[tx][ty])
	{
		dfs(tx, ty);
	}
	tx = x, ty = y + 1;
	if (in(tx, ty) && !vis[tx][ty] && map[tx][ty])
	{
		dfs(tx, ty);
	}
	vis[x][y] = 0;


}
int main(int argc, char const *argv[])
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (map[i][j] == 's') {
				dfs(i, j);
			}
		}
	}
	cout << ans;
	return 0;
}


