#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n = 0;
	for (int i = 1; i < 200; ++i)
	{
		n = 0;
		for (int j = i; j < 200 ; ++j)
		{
			n = n + j;
			if (n == 236)
			{
				cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}