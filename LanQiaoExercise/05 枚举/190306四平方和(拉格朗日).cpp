#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int a = 0; a < n; ++a)
	{
		for (int b = 0; b < n; ++b)
		{
			for (int c = 0; c < n; ++c)
			{
				for (int d = 0; d < n; ++d)
				{
					if (n == (a * a + b * b + c * c + d * d))
					{
						cout << n << "=" << a << "+" << b << "+" << c << "+" << d << endl;
					}
				}
			}
		}
	}
	return 0;
}