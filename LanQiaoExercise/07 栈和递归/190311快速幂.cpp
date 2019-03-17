#include <iostream>
using namespace std;
int f(int x, int y) {
	if (y == 0) {
		return 1;
	} else if (y % 2 == 0) {
		return f(x, y / 2) * f(x, y / 2);
	} else {
		return f(x, y / 2) * f(x, y / 2) * x;
	}
}
int main(int argc, char const *argv[])
{
	int x, y, p, t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> x >> y >> p;
		cout << f(x, y) % p << endl;
	}
	return 0;
}