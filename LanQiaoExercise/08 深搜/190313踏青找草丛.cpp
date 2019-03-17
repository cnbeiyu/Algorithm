#include <iostream>
using namespace std;
char s[100][100];
bool vis[100][100];
int ans;
int n, m;
int dir[4][2] = {{1, 0}, {0, 1}, { -1, 0}, {0, -1}};
bool in(int x, int y) {
	return 0 <= x && x < n && 0 <= y && y < m;
}
void dfs(int x, int y) {
	vis[x][y] = 1;
	cout << x << y << endl;
	for (int i = 0; i < 4; ++i)
	{
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		if (in(tx, ty) && s[tx][ty] == '#' && !vis[tx][ty])
		{
			dfs(tx, ty);
		}
	}
	// ans += 1;
}

int main(int argc, char const *argv[])
{

	cin >> n >> m ;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> s[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (!vis[i][j] && s[i][j] == '#') {
				dfs(i, j);
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}