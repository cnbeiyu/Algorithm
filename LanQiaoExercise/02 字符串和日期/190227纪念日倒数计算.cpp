#include <iostream>
using namespace std;
int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(int argc, char const *argv[])
{
	int y, m, d, k;
	cin >> y >> m >> d >> k;
	for (int i = 1; i <= k; ++i)
	{
		if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0) {
			day[2] = 29;
		}
		else {
			day[2] = 28;
		}
		d++;
		if (d = day[m] + 1) {
			d = 1;
			m++;
		}
		if (m == 13) {
			m = 1;
			y++;
		}
	}
	cout << y << m << d << endl;
	return 0;
}
