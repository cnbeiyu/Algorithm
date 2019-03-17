#include <iostream>
using namespace std;
bool judge(int n) {
	int a = n / 10000;
	int b = n / 1000 % 10;
	int c = n / 100 % 10;
	int d = n / 10 % 10;
	int e = n % 10;
	if (a != 4 && b != 4 && c != 4 && d != 4 && e != 4)
		return true;
	else
		return false;
}
int main(int argc, char const *argv[])
{
	int n, m;
	int ans = 0;
	cin >> n >> m;
	for (int i = n; i < m + 1; ++i)
	{
		if (judge(i))
			ans++;
	}
	cout << ans;
	return 0;
}