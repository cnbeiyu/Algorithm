#include <iostream>
using namespace std;
bool judge(int n) {
	int a = n / 1000;
	int b = n / 100 % 10;
	int c = n / 10 % 10;
	int d = n % 10;
	int ans = a * a * a * a  + b * b * b * b + c * c * c * c + d * d * d * d;
	if (ans == n)
	{
		cout << ans;
		return true;
	}
	else {
		return false;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 1000; i < n; ++i)
	{
		if (judge(n))
		{
			cout << n << endl;
		}
	}
	return 0;
}