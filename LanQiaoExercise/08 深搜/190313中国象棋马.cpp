#include <iostream>
using namespace std;
char s[10][10];
int dir[8][2] = {{2, 1}, {1, 2}, { -1, 2}, { -2, 1}, { -2, -1}, { -1, -2}, {1, -2}, {2, -1}};
bool vis[10][10];
bool in(int x, int y) {
	return 0 <= x && x < 10 && 0 <= y && y < 9;
}
bool f;
void dfs(int x, int y) {
	cout << x << y << endl;
	if (s[x][y] == 'T') {
		f = 1;
		return;
	}
	if (f)
	{
		return;
		/* code */
	}
	vis[x][y] = 1;
	for (int i = 0; i < 8; ++i)
	{
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		if (in(tx, ty) && !vis[tx][ty] && s[tx][ty] != '#') {
			dfs(tx, ty);

		}
	}
	vis[x][y] = 0;
	// return false;

}
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 10; ++i)
	{
		cin >> s[i];
	}
	int x, y;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (s[i][j] == 'S')
			{
				x = i;
				y = j;
			}
		}
	}
	dfs(x, y);
	if (f) {
		cout << "yes";
	} else {
		cout << "no";
	}

	return 0;
}