#include <iostream>
using namespace std;
int n, a, b, p;
int ans[2000];
bool vis[2000];
int f(int x) {
	if (vis[x])
		return ans[x];
	vis[x] = true;
	if (x == 1 || x == 2)
		return ans[x] = 1;
	else {
		return ans[x] = f(x - 1) * a + f(x - 2) * b;
	}
}
int main(int argc, char const *argv[])
{

	cin >> n >> a >> b >> p;
	cout << f(n) % p;
	return 0;
}