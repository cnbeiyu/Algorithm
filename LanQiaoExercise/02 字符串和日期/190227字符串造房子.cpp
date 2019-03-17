#include <iostream>
#include  <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	int y;
	cin >> x;
	cin >> y;
	string ch1;
	string ch2;
	for (int j = 1; j <= y; ++j)
	{
		ch1 = ch1 + "+-";
		ch2 = ch2 + "|*";
		// cout << ch1 << endl;
		// cout << j;
	}
	ch1 = ch1 + '+';
	ch2 = ch2 + '|';
	for (int i = 1; i <= 2 * x + 1; ++i)
	{
		if (i % 2 == 1) {
			cout << ch1 << endl;
		}
		else {
			cout << ch2 << endl;
		}
	}

}