#include <iostream>
int n, k, sum;
int num[1000];
int ans;
using namespace std;
void dfs(int i, int cnt, int s) //i:当前选择第几个数，cnt：共选择了几个数
{
	cout << i << num[i] << cnt << sum << endl;
	if (i == n)
	{
		if (cnt == k && s == sum)
		{
			ans++;
		}
		return;
	}
	dfs(i + 1, cnt, s);
	dfs(i + 1, cnt + 1, s + num[i]);
}
int main()
{
	cin >> n >> k >> sum;
	for (int i = 0; i < n; ++i)
	{
		cin >> num[i];
	}
	ans = 0;
	dfs(0, 0, 0);
	cout << ans;
	return 0;
}
