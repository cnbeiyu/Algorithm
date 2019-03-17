#include <iostream>
#include  <string>
using namespace std;
int main(int argc, char const *argv[])
{
	char c;
	cin >> c;
	if (c >= 'A' && c <= 'Z') {
		for (int i = 1; i <= c - 'A' + 1; ++i)
		{
			string space = string(c - 'A' + 1 - i, ' ');
			string ch;
			for (int j = 1; j <= i; j++) {
				ch = ch + (char)('A' + j - 1);
			}
			for (int j = i - 1; j >= 1; j--) {
				ch = ch + (char)('A' + j - 1);
			}
			cout << space + ch << endl;
		}
	}
}