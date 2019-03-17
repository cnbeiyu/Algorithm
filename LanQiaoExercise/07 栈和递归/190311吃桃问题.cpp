#include <iostream>
using namespace std;
int n;
int f(int x) {
	if (x == n) {
		return 1;
	} else {
		return (f(x + 1) + 1) * 2;
	}
}
int main(int argc, char const *argv[])
{

	cin >> n;
	cout << f(1);
	return 0;
}