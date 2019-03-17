#include <iostream>
#include <algorithm>
using namespace std;
int a[100];
int main(int argc, char const *argv[])
{
	int n, min, ans;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	ans = a[1] - a[0];
	for (int i = 1; i < n; ++i)
	{
		min = a[i] - a[i - 1];
		if (min < ans)
		{
			ans = min;
		}
	}
	cout << ans;
	return 0;
}