//思路：用四根线圈地
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int num[100][100];
int main(int argc, char const *argv[])
{
	int n, m;
	int ans;
	int max = 0;
	int now = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> num[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int k = i ; k < n ; ++k)
		{
			for (int j = 0; j < m; ++j)
			{
				for (int l = j ; l < m; ++l)
				{
					//圈地完成
					now = 0;
					for (int p = i; p <= k  ; ++p)
					{
						for (int q = j; q <= l ; ++q)
						{
							now = now + num[p][q];
						}
					}
					if (now > max)
					{
						max = now;
					}
				}
			}
		}
	}
	cout << max;
	return 0;
}