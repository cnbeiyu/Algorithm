#include <cstdio>
#include <cstring>
using namespace std;
int num[100][100];
int ans[100][100];
int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf("%d", &num[i][j]);
		}
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < m; ++j)
	// 	{
	// 		printf("%d", num[n][m]);
	// 	}
	// }
	// for (int j = m - 1; j != -1 ; j--)
	// {
	// 	for (int i = 0; i < n; ++i)
	// 	{
	// 		printf("%d", num[i][j]);
	// 	}
	// 	printf("\n");
	// }
	// for (int j = 0; j < n; ++j)
	// {
	// 	for (int i = m; i != -1; --i)
	// 	{
	// 		printf("%d", num[j][i] );
	// 	}
	// 	printf("\n");
	// }
	// for (int i = n; i > -1 ; i--)
	// {
	// 	// printf("%d********\n", i );
	// 	for (int j = 0; j < m; ++j)
	// 	{
	// 		printf("%d", num[i][j]);
	// 	}
	// 	printf("\n");
	// }
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; i < n; ++i)
		{
			printf("%d\n", num[n - 1 - j][i]);
		}
	}



	return 0;
}